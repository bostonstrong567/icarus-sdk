// /Script/Icarus.ExtensionLimitLimbDefinition
// size 0x24, declared in Icarus/Source/Icarus/Animation/AnimNode_ExtensionLimit.h

USTRUCT()
struct FExtensionLimitLimbDefinition
{
public:
    UPROPERTY(EditAnywhere) FBoneReference IKLimbBone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference FKLimbBone;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumBonesInLimb;  // 0x0020, size 0x4
};
