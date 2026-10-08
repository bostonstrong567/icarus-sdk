// /Script/Engine.ShadowMapTexture2D
// Derives from: UTexture2D > UTexture > UStreamableRenderAsset > UObject
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/Engine/ShadowMapTexture2D.h

UCLASS(MinimalAPI)
class UShadowMapTexture2D : public UTexture2D
{
public:
    UPROPERTY() TEnumAsByte<EShadowMapFlags> ShadowmapFlags;  // 0x01A0, size 0x1
};
