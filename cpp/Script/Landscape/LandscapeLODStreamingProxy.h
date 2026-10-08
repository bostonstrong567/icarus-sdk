// /Script/Landscape.LandscapeLODStreamingProxy
// Derives from: UStreamableRenderAsset > UObject
// size 0x68, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeComponent.h

UCLASS(MinimalAPI)
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{
public:

    // Not reflected: the engine's scripting cannot see these.
    ULandscapeComponent * LandscapeComponent;  // 0x0060, private
};
