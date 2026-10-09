// /Script/Landscape.LandscapeSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Engine/Source/Runtime/Landscape/Public/LandscapeSubsystem.h

UCLASS(MinimalAPI)
class ULandscapeSubsystem : public UTickableWorldSubsystem
{
private:
    TArray<ALandscapeProxy *,TSizedDefaultAllocator<32> > Proxies;  // 0x0040, not reflected
};
