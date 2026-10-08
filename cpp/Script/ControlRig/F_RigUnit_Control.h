// /Script/ControlRig.RigUnit_Control
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Control/RigUnit_Control.h

USTRUCT()
struct FRigUnit_Control : public FRigUnit
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FEulerTransform Transform;  // 0x0008, size 0x24
    UPROPERTY() FTransform Base;  // 0x0030, size 0x30
    UPROPERTY() FTransform InitTransform;  // 0x0060, size 0x30
    UPROPERTY() FTransform Result;  // 0x0090, size 0x30
    UPROPERTY() FTransformFilter Filter;  // 0x00C0, size 0x9
};
