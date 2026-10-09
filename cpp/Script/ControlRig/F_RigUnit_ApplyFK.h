// /Script/ControlRig.RigUnit_ApplyFK
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/RigUnit_ApplyFK.h

USTRUCT()
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
public:
    UPROPERTY(EditAnywhere) FName Joint;  // 0x0068, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
    UPROPERTY(EditAnywhere) FTransformFilter Filter;  // 0x00A0, size 0x9
    UPROPERTY(EditAnywhere) EApplyTransformMode ApplyTransformMode;  // 0x00A9, size 0x1
    UPROPERTY(EditAnywhere) ETransformSpaceMode ApplyTransformSpace;  // 0x00AA, size 0x1
    UPROPERTY(EditAnywhere) FTransform BaseTransform;  // 0x00B0, size 0x30
    UPROPERTY(EditAnywhere) FName BaseJoint;  // 0x00E0, size 0x8
};
