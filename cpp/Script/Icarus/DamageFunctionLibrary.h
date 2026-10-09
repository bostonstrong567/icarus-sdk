// /Script/Icarus.DamageFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Damage/DamageFunctionLibrary.h

UCLASS()
class UDamageFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AppendNewCriticalHitAreas(TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> InitialHitAreas, TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> AreasToAppend, TMap<UPrimitiveComponent*, FCriticalHitAreasEnum>& CombinedAreas);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) static int32 CalculateDamageTaken(EIcarusDamageType DamageType, int32 DamageValue, AActor* Causer, AActor* Defender);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static bool CheckForStealthHit(EIcarusDamageType DamageType, AActor* Causer, AActor* Defender);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static FDamageEvent CreateDamageEvent(EIcarusDamageType DamageType);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool DealCollisionDamage(AActor* Attacker, AActor* Defender, float ImpulseDamage, const FHitResult& HitInfo);  // parameters 0x9D
    UFUNCTION(BlueprintCallable) static bool DealDamage(AActor* Attacker, AActor* Weapon, AActor* Defender);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool DealDamageToInventoryItem(EIcarusDamageType DamageType, int32 DamageAmount, UInventory* Inventory, int32 Location);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static bool DealDamageToInventoryItems(EIcarusDamageType DamageType, int32 DamageAmount, UInventory* Inventory, FGameplayTagQuery TagQuery);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool DealExplosiveDamage(AActor* Attacker, AController* Instigator, AActor* Defender, int32 Value, const FHitResult& HitInfo);  // parameters 0xA5
    UFUNCTION(BlueprintCallable) static bool DealFlatDamage(EIcarusDamageType DamageType, int32 DamageAmount, AActor* Defender, AController* Instigator, AActor* Causer);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool DealPointDamage(AActor* Attacker, AActor* Weapon, AActor* Defender, bool bIsKillCam, const FVector& HitNormal, const FHitResult& HitInfo, bool& WasCriticalHit);  // parameters 0xB2
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static bool DealRadialDamage(UObject* WorldContextObject, EIcarusDamageType DamageType, float BaseDamage, const FVector& Origin, float DamageRadius, const TArray<AActor*>& IgnoreActors, AActor* Attacker, AController* AttackInstigator, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);  // parameters 0x43
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static bool DealRadialDamageWithFalloff(UObject* WorldContextObject, EIcarusDamageType DamageType, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, const TArray<AActor*>& IgnoreActors, TArray<AActor*>& HitActors, AActor* Attacker, AController* AttackInstigator, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);  // parameters 0x62
    UFUNCTION(BlueprintCallable) static bool DealSelfDamage(EIcarusDamageType DamageType, int32 DamageAmount, AActor* Defender);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool DoProjectileDamageFromStat(const FHitResult& HitResult, APawn* Instigator, AController* InstigatorController);  // parameters 0x99
    UFUNCTION(BlueprintCallable) static int32 GetAttackerBasedResistance(AActor* Causer, AActor* Defender);  // parameters 0x14
    UFUNCTION() static FStatContainer GetBestStatContainer(AActor* Attacker);  // parameters 0x110
    UFUNCTION(BlueprintCallable) static float GetCriticalDamageMultiplier(AController* Instigator, AActor* DamageCauser, const FCriticalHitAreasEnum& CriticalHitArea);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static int32 GetCriticalDamagePlusPercent(AActor* Attacker);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static bool GetCriticalHitArea(AActor* Defender, const FHitResult& HitInfo, FCriticalHitAreasRowHandle& CriticalHitArea, TArray<EIcarusDamageType> DamageTypes);  // parameters 0xB9
    UFUNCTION(BlueprintCallable) static FColor GetDamageColor(EIcarusDamageType DamageType);  // parameters 0x8
    UFUNCTION() static FStatContainer GetDamageStatContainer(AActor* Attacker, AActor* Weapon, bool& IsProjectile);  // parameters 0x120
    UFUNCTION(BlueprintCallable) static TSubclassOf<UDamageType> GetDamageTypeClass(EIcarusDamageType DamageType);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static EIcarusDamageType GetDamageTypeFromEvent(const FDamageEvent& DamageEvent);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static float GetDefenderBasedDamageMultiplier(AActor* Causer, AActor* Defender);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static bool IsCriticalHit(AActor* Defender, const FHitResult& HitInfo, FCriticalHitAreasEnum& CriticalHitType, TArray<EIcarusDamageType> DamageTypes);  // parameters 0xB1
    UFUNCTION(BlueprintCallable) static UIcarusLargeScaleDestroyComponent* LargeScaleDestroy(const FLargeScaleDestroyParams& Params, AActor* Instigator);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static bool PartiallyRepairItem(AIcarusItem* ItemInstance, float RepairPercent);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static TMap<EIcarusDamageType, int32> PredictDamage(AActor* Attacker, AActor* Weapon, bool bUseDamageVariation);  // parameters 0x68
    UFUNCTION(BlueprintCallable) static int32 PredictResistedDamage(AActor* Attacker, AActor* Weapon, AActor* Defender, bool bKillCam);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool PrepareProjectileDamage(AActor* Instigator, AActor* Projectile);  // parameters 0x11
};
