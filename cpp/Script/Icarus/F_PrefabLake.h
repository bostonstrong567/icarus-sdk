// /Script/Icarus.PrefabLake
// size 0x70, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabLake
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaterSetupRowHandle WaterSetup;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESplineLoopDirection SplineDirection;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> EdgeSplinePoints;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeSplineDensity;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LakeDepth;  // 0x0064, size 0x4
};
