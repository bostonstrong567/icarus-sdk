// /Script/ControlRig.RigUnit_MathTransformFromSRT
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
public:
    UPROPERTY() FVector Location;  // 0x0008, size 0xC
    UPROPERTY() FVector Rotation;  // 0x0014, size 0xC
    UPROPERTY() EControlRigRotationOrder RotationOrder;  // 0x0020, size 0x1
    UPROPERTY() FVector Scale;  // 0x0024, size 0xC
    UPROPERTY() FTransform Transform;  // 0x0030, size 0x30
    UPROPERTY() FEulerTransform EulerTransform;  // 0x0060, size 0x24
};
