// /Script/Engine.VolumeTexture
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x1D0, declared in Engine/Source/Runtime/Engine/Classes/Engine/VolumeTexture.h

UCLASS(MinimalAPI)
class UVolumeTexture : public UTexture
{
public:
    FTexturePlatformData * PlatformData;  // 0x0178, not reflected
    TMap<FString,FTexturePlatformData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTexturePlatformData *,0> > CookedPlatformData;  // 0x0180, not reflected
};
