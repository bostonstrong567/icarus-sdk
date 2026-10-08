// /Script/AnimGraphRuntime.RBFTarget
// size 0xA0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/RBF/RBFSolver.h

USTRUCT()
struct FRBFTarget : public FRBFEntry
{
    UPROPERTY(EditAnywhere) float ScaleFactor;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) bool bApplyCustomCurve;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere) FRichCurve CustomCurve;  // 0x0018, size 0x80
    UPROPERTY(EditAnywhere) ERBFDistanceMethod DistanceMethod;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere) ERBFFunctionType FunctionType;  // 0x0099, size 0x1
};
