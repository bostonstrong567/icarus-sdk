// /Script/Icarus.SpeedWarping3DLimbDefinition
// size 0x34, declared in Icarus/Source/Icarus/Animation/AnimNode_SpeedWarping3D.h

USTRUCT()
struct FSpeedWarping3DLimbDefinition
{
    UPROPERTY(EditAnywhere) FBoneReference IKLimbBone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference FKLimbBone;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference IKLimbTargetBone;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumBonesInLimb;  // 0x0030, size 0x4
};
