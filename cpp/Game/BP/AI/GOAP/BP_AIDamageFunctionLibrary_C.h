// /Game/BP/AI/GOAP/BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AIDamageFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void CalcLaunchAmount(FVector Dir, AActor* SelfNPC, AActor* TargetActor, UObject* __WorldContext, FVector& OutForce);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static void CanActorBeKnockedBack(AActor* Target, UObject* __WorldContext, bool& CanBeKnockedBack);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void LaunchAttackTarget(AActor* SelfNPC, AActor* TargetActor, bool IncludeSelf, FVector OverrideLaunchDirection, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void NPC_DealDamage(AIcarusCharacter* CauserNPC, AActor* TargetActor, bool LaunchSelf, bool IgnoreRangeCheck, FVector OverrideLaunchDirection, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void PlayAttackHitEffects(AIcarusCharacter* SelfNPC, AActor* HitActor, UObject* __WorldContext, FHitResult& OutHit);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) static void TryRestoreHealthAfterKillingBlow(APawn* SelfAITargetable, AActor* Target, UObject* __WorldContext);  // parameters 0x18
};
