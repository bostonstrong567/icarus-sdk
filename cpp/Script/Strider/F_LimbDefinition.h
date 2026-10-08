// /Script/Strider.LimbDefinition
// size 0x80, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/StriderData.h

USTRUCT()
struct FLimbDefinition
{
    UPROPERTY(EditAnywhere) FBoneReference Tip;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference IkTarget;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) int32 BoneCount;  // 0x0020, size 0x4

    // Not reflected:
    TArray<FBoneReference,TSizedDefaultAllocator<32> > Bones;  // 0x0028
    float Length;  // 0x0038
    float HeightDelta;  // 0x003C
    FVector TipLocation_CS;  // 0x0040
    FTransform BaseBoneTransform_CS;  // 0x0050
};
