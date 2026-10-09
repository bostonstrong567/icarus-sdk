// /Script/Engine.BoneMirrorInfo
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FBoneMirrorInfo
{
public:
    UPROPERTY(EditAnywhere) int32 SourceIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> BoneFlipAxis;  // 0x0004, size 0x1
};
