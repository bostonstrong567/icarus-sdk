// /Game/BP/Audio/Footsteps/BP_GroundSurfaceChecker.BP_GroundSurfaceChecker_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x220, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_GroundSurfaceChecker_C : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> Surface;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceRadius;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceDistance;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SlopeAngle;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> IgnoreActors;  // 0x0210, size 0x10

    UFUNCTION(BlueprintCallable) void GetCurrentSurface(TEnumAsByte<EPhysicalSurface>& Surface, float& WaterDepth, float& SlopeAngle, AActor*& HitActor, FVector& HitLocation);  // parameters 0x24
};
