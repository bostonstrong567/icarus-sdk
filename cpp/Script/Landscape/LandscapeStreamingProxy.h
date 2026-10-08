// /Script/Landscape.LandscapeStreamingProxy
// Derives from: ALandscapeProxy > AActor > UObject
// size 0x5B8, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeStreamingProxy.h

UCLASS(NotPlaceable, MinimalAPI, Config=Engine)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
    UPROPERTY(EditAnywhere) TLazyObjectPtr<ALandscape> LandscapeActor;  // 0x0598, size 0x1C
};
