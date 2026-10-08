// /Script/Engine.VolumeTexture
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x1D0, declared in Engine/Source/Runtime/Engine/Classes/Engine/VolumeTexture.h

UCLASS(MinimalAPI)
class UVolumeTexture : public UTexture
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FTexturePlatformData * PlatformData;  // 0x0178
    TMap<FString,FTexturePlatformData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTexturePlatformData *,0> > CookedPlatformData;  // 0x0180
};
