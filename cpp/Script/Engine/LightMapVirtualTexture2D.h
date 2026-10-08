// /Script/Engine.LightMapVirtualTexture2D
// Derives from: UTexture2D > UTexture > UStreamableRenderAsset > UObject
// size 0x1C0, declared in Engine/Source/Runtime/Engine/Classes/VT/LightmapVirtualTexture.h

UCLASS()
class ULightMapVirtualTexture2D : public UTexture2D
{
public:
    UPROPERTY(EditAnywhere) TArray<int8> TypeToLayer;  // 0x01A0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bPreviewLightmap;  // 0x01B0
};
