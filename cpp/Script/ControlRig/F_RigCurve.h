// /Script/ControlRig.RigCurve
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigCurveContainer.h

USTRUCT()
struct FRigCurve : public FRigElement
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x0018, size 0x4
};
