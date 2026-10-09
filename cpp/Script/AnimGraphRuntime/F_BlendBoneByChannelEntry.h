// /Script/AnimGraphRuntime.BlendBoneByChannelEntry
// size 0x24, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendBoneByChannel.h

USTRUCT()
struct FBlendBoneByChannelEntry
{
public:
    UPROPERTY(EditAnywhere) FBoneReference SourceBone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference TargetBone;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) bool bBlendTranslation;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere) bool bBlendRotation;  // 0x0021, size 0x1
    UPROPERTY(EditAnywhere) bool bBlendScale;  // 0x0022, size 0x1
};
