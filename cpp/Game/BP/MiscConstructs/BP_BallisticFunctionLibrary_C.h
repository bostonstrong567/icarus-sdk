// /Game/BP/MiscConstructs/BP_BallisticFunctionLibrary.BP_BallisticFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_BallisticFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void CreateCriticalHitResult(FHitResult InPredictedHit, FName CriticalHitBone, UObject* __WorldContext, FHitResult& OutCriticalHit);  // parameters 0x120
    UFUNCTION(BlueprintCallable) static UBallisticPoolManager* GetBallisticPoolManager(UObject* __WorldContext);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void GetClosestBoneAlongProjectilePrediction(FPredictProjectilePathResult InPredictionData, AActor* InActor, UObject* __WorldContext, FName& HitBone, UPrimitiveComponent*& HitComponent);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) static void PredictProjectileDamage(AActor* Weapon, AActor* Defender, FHitResult ProjectileHit, bool KillCam, UObject* __WorldContext, float& OutDamage);  // parameters 0xAC
};
