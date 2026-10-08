// /Game/BP/CriticalHit/ICriticalHitInterface.ICriticalHitInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UICriticalHitInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GatherIntersections(AActor* Projectile, bool Debug, bool& Return, TArray<FCHCollisionStruct>& Intersections);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetCHBounds(bool& Return, UBoxComponent*& Box);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetTargetHealth(bool& Return, float& Health);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PredictMovement(float Time, bool& Return);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void ResetPrediction(bool& Return);  // parameters 0x1
};
