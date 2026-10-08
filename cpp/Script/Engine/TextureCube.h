// /Script/Engine.TextureCube
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x1D0, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureCube.h

UCLASS(MinimalAPI)
class UTextureCube : public UTexture
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FTexturePlatformData * PlatformData;  // 0x0178
    TMap<FString,FTexturePlatformData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTexturePlatformData *,0> > CookedPlatformData;  // 0x0180
};
