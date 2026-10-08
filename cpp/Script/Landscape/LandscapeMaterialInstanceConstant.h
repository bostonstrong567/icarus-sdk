// /Script/Landscape.LandscapeMaterialInstanceConstant
// Derives from: UMaterialInstanceConstant > UMaterialInstance > UMaterialInterface > UObject
// size 0x330, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeMaterialInstanceConstant.h

UCLASS(MinimalAPI)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
    UPROPERTY() TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;  // 0x0318, size 0x10
    UPROPERTY() uint8 bIsLayerThumbnail : 1;  // 0x0328, mask 0x01
    UPROPERTY() uint8 bDisableTessellation : 1;  // 0x0328, mask 0x02
    UPROPERTY() uint8 bMobile : 1;  // 0x0328, mask 0x04
    UPROPERTY() uint8 bEditorToolUsage : 1;  // 0x0328, mask 0x08
};
