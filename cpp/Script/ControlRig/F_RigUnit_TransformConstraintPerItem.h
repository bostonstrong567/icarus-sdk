// /Script/ControlRig.RigUnit_TransformConstraintPerItem
// size 0x140, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h

USTRUCT()
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY(EditAnywhere) ETransformSpaceMode BaseTransformSpace;  // 0x0074, size 0x1
    UPROPERTY(EditAnywhere) FTransform BaseTransform;  // 0x0080, size 0x30
    UPROPERTY(EditAnywhere) FRigElementKey BaseItem;  // 0x00B0, size 0xC
    UPROPERTY(EditAnywhere) TArray<FConstraintTarget> Targets;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere) bool bUseInitialTransforms;  // 0x00D0, size 0x1
private:
    UPROPERTY(Transient) FRigUnit_TransformConstraint_WorkData WorkData;  // 0x00D8, size 0x60
};
