// /Script/HairStrandsCore.HairGroupCardsTextures
// size 0x30, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/HairCardsBuilder.h

USTRUCT()
struct FHairGroupCardsTextures
{
    UPROPERTY(EditAnywhere) UTexture2D* DepthTexture;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) UTexture2D* CoverageTexture;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) UTexture2D* TangentTexture;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) UTexture2D* AttributeTexture;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) UTexture2D* AuxilaryDataTexture;  // 0x0020, size 0x8

    // Not reflected:
    bool bNeedToBeSaved;  // 0x0028
};
