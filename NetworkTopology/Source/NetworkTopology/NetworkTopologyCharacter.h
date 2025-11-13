// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "NetworkTopologyCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ANetworkTopologyCharacter : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY(ReplicatedUsing=OnRep_Health, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
	float Health = 100.0f;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<class USoundBase> HurtSound;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	ANetworkTopologyCharacter();
	
	//Launches this character on the server
	//Split into 3 functions
	//ServerLaunchCharacter (needs no definition, is filled by Unreal Engine)
	//ServerLaunchCharacter_Validate (needs to return true or else the client disconnects; purpose is for anti-desync/anti-cheat
	//ServerLaunchCharacter_Implementation (this is the logic that runs on the server)
	UFUNCTION(Server, BlueprintCallable, WithValidation, Reliable)
	void ServerLaunchCharacter();
	
	//Prints a message on the owning client for this character
	//Split into 2 functions
	//ClientPrintMessage (needs no definition, is filled by Unreal Engine)\
	//ClientPrintMessage_Implementation (logic that runs on the server)
	UFUNCTION(Client, BlueprintCallable, Unreliable)
	void ClientPrintMessage(const FString& Message);
	
	//Plays a sound at the location of the character
	//Split into 2 functions
	//MulticastPlaySoundHere (n
	//MulticastPlaySoundHere_Implementation
	UFUNCTION(NetMulticast, BlueprintCallable, Unreliable)
	void MulticastPlaySoundHere(class USoundBase* SoundToPlay);

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	
private:
	//Network Topology Game Character members
	UFUNCTION()
	void OnRep_Health();
			

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();
	
public:
	//AActor interface
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

