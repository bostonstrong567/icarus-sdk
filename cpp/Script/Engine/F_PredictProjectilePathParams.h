// /Script/Engine.PredictProjectilePathParams
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h

USTRUCT()
struct FPredictProjectilePathParams
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartLocation;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LaunchVelocity;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTraceWithCollision;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectileRadius;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSimTime;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTraceWithChannel;  // 0x0024, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECollisionChannel> TraceChannel;  // 0x0025, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ActorsToIgnore;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SimFrequency;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverrideGravityZ;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EDrawDebugTrace> DrawDebugType;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrawDebugTime;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTraceComplex;  // 0x0058, size 0x1
};
