// /Script/ControlRig.RigUnit_ModifyBoneTransforms
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h

USTRUCT()
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;  // 0x0068, size 0x10
    UPROPERTY() float Weight;  // 0x0078, size 0x4
    UPROPERTY() float WeightMinimum;  // 0x007C, size 0x4
    UPROPERTY() float WeightMaximum;  // 0x0080, size 0x4
    UPROPERTY() EControlRigModifyBoneMode Mode;  // 0x0084, size 0x1
    UPROPERTY(Transient) FRigUnit_ModifyBoneTransforms_WorkData WorkData;  // 0x0088, size 0x10
};
