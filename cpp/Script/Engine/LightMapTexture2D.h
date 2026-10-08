// /Script/Engine.LightMapTexture2D
// Derives from: UTexture2D > UTexture > UStreamableRenderAsset > UObject
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/Engine/LightMapTexture2D.h

UCLASS(MinimalAPI)
class ULightMapTexture2D : public UTexture2D
{
public:

    // Not reflected: the engine's scripting cannot see these.
    ELightMapFlags LightmapFlags;  // 0x01A0
};
