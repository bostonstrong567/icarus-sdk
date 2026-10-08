// /Script/Engine.PredictProjectilePathResult
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h

USTRUCT()
struct FPredictProjectilePathResult
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FPredictProjectilePathPointData> PathData;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPredictProjectilePathPointData LastTraceDestination;  // 0x0010, size 0x1C
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FHitResult HitResult;  // 0x002C, size 0x88
};
