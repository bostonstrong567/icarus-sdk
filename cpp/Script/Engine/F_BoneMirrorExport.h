// /Script/Engine.BoneMirrorExport
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FBoneMirrorExport
{
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FName SourceBoneName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> BoneFlipAxis;  // 0x0010, size 0x1
};
