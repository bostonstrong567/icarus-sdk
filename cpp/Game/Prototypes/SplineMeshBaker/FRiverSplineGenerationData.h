// /Game/Prototypes/SplineMeshBaker/FRiverSplineGenerationData.FRiverSplineGenerationData
// size 0x60

USTRUCT()
struct FRiverSplineGenerationData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator SpawnRotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRiverSplineSetup> SplineSetup;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_InteractableRiver_C* TempRiverActor;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBasicSplinePoint> LeftSplinePoints;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBasicSplinePoint> RightSplinePoints;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLavaRiverFlowPointData> LavaFlowPoints;  // 0x0050, size 0x10
};
