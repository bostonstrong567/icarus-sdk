// /Script/Paper2D.SpriteAssetInitParameters
// size 0x40, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h

USTRUCT()
struct FSpriteAssetInitParameters
{

    // Not reflected:
    UTexture2D * Texture;  // 0x0000
    TArray<UTexture *,TSizedDefaultAllocator<32> > AdditionalTextures;  // 0x0008
    FIntPoint Offset;  // 0x0018
    FIntPoint Dimension;  // 0x0020
    bool bOverridePixelsPerUnrealUnit;  // 0x0028
    float PixelsPerUnrealUnit;  // 0x002C
    UMaterialInterface * DefaultMaterialOverride;  // 0x0030
    UMaterialInterface * AlternateMaterialOverride;  // 0x0038
};
