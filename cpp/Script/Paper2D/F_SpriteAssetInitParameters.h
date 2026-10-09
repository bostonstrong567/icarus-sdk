// /Script/Paper2D.SpriteAssetInitParameters
// size 0x40, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h

USTRUCT()
struct FSpriteAssetInitParameters
{
public:
    UTexture2D * Texture;  // 0x0000, not reflected
    TArray<UTexture *,TSizedDefaultAllocator<32> > AdditionalTextures;  // 0x0008, not reflected
    FIntPoint Offset;  // 0x0018, not reflected
    FIntPoint Dimension;  // 0x0020, not reflected
    bool bOverridePixelsPerUnrealUnit;  // 0x0028, not reflected
    float PixelsPerUnrealUnit;  // 0x002C, not reflected
    UMaterialInterface * DefaultMaterialOverride;  // 0x0030, not reflected
    UMaterialInterface * AlternateMaterialOverride;  // 0x0038, not reflected
};
