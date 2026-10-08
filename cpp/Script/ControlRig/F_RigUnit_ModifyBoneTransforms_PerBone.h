// /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h

USTRUCT()
struct FRigUnit_ModifyBoneTransforms_PerBone
{
    UPROPERTY(EditAnywhere) FName Bone;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FTransform Transform;  // 0x0010, size 0x30
};
