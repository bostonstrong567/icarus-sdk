// /Script/ControlRig.RigUnit_ModifyTransforms
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h

USTRUCT()
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;  // 0x0068, size 0x10
    UPROPERTY() float Weight;  // 0x0078, size 0x4
    UPROPERTY() float WeightMinimum;  // 0x007C, size 0x4
    UPROPERTY() float WeightMaximum;  // 0x0080, size 0x4
    UPROPERTY() EControlRigModifyBoneMode Mode;  // 0x0084, size 0x1
    UPROPERTY(Transient) FRigUnit_ModifyTransforms_WorkData WorkData;  // 0x0088, size 0x10
};
