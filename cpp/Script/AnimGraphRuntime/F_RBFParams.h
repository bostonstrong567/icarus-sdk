// /Script/AnimGraphRuntime.RBFParams
// size 0x2C, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/RBF/RBFSolver.h

USTRUCT()
struct FRBFParams
{
public:
    UPROPERTY() int32 TargetDimensions;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERBFSolverType SolverType;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutomaticRadius;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERBFFunctionType Function;  // 0x000D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERBFDistanceMethod DistanceMethod;  // 0x000E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBoneAxis> TwistAxis;  // 0x000F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeightThreshold;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERBFNormalizeMethod NormalizeMethod;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MedianReference;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MedianMin;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MedianMax;  // 0x0028, size 0x4
};
