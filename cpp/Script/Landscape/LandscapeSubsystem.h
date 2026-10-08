// /Script/Landscape.LandscapeSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Engine/Source/Runtime/Landscape/Public/LandscapeSubsystem.h

UCLASS(MinimalAPI)
class ULandscapeSubsystem : public UTickableWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<ALandscapeProxy *,TSizedDefaultAllocator<32> > Proxies;  // 0x0040, private
};
