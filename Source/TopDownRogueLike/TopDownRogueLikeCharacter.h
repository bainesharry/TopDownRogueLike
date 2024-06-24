// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WeaponBase.h"
#include "TopDownRogueLikeCharacter.generated.h"

//This class functions as the primary "character" classs that both player and enemy classes are derived from. Therefore, all functionality shared is defined here.

UCLASS(Blueprintable)
class ATopDownRogueLikeCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATopDownRogueLikeCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	//Returns EquippedWeapon Child Actor subobject
	FORCEINLINE class UChildActorComponent* GetEquippedWeapon() const { return EquippedWeapon; }
	
	//Allows for Retrieval of references to attributes.
	float& GetMaxHealth();
	float& GetDamage();
	float& GetFireRate();
	float& GetRange();
	float& GetSpeed();

	float& GetUpgradeFactorHealth();
	float& GetUpgradeFactorDamage();
	float& GetUpgradeFactorFireRate();
	float& GetUpgradeFactorRange();
	float& GetUpgradeFactorSpeed();

	//Establishes a generic shoot functionality-players and enemies will both utilise the same shooting functionality but call the function through different methods.
	void Shoot();

	//declares an overriding of the take damage function from the parent Actor class.
	float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	//Virtual Void function for what happens after player/enemy dies. Overriden in player/enemy code as different things happen depending on player/enemy death.
	virtual void Die();
	
	virtual void StartShooting();
	virtual void StopShooting();
	virtual void PreShootPrep() {};

protected:

	//Properties shared by all characters. In the players hands, these properties can be upgraded.
	//The characters Current Health. Dies When reaching zero.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float Health;


	//The amount of Damage that a character inflicts with a shot.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float Damage;

	//The fastest a character can shoot. Calculated by 1 second/Firerate
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float FireRate;


	//The max range a character can shoot
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float Range;

	//Characters Max Health
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float MaxHealth;

	//These dictate the increase in stats when an upgrade is purchased. In the future, these will be adjusted in child classes to allow for scaling of various "classes."
	//The amount the characters max health is increased by.
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float MaxHealthUpgradeFactor;

	//The amount the characters damage is increased by.
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float DamageUpgradeFactor;

	//The amount the characters firerrate is increase by.
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float FireRateUpgradeFactor;

	//The amount the characters range is increased by.
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float RangeUpgradeFactor;

	//The amount the characters range is increased by.
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float SpeedUpgradeFactor;

	//Decs variables for whether a character can fire or is already shooting.
	bool canFire;
	bool isShooting;
	FTimerHandle TimeSinceLastShotHandle;
	FTimerHandle TimerHandle_Refire;
	void TickUpTimeSinceLastShot();


private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;


	//Was part of initial design to have weapons defined as a single class. Later in development it was established that each character would have 1 weapon only, making seperare classes redundant.
	//Instead-variety can be acheived through different character classes instead. (Think rls such as risk of rain).
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UChildActorComponent* EquippedWeapon;

	void AllowShooting();


	//Meshes defining the appearence of the character. Unreals base character class is rather complex to work with, therefore the skeleton mesh component is just ignored instead of deleted.
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	class UStaticMeshComponent* CharMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	class UStaticMeshComponent* CharHead;




	


};

