// /Script/Icarus.ProspectAudioComponent
// Derives from: UActorComponent > UObject
// size 0xB0, declared in Icarus/Source/Icarus/Audio/ProspectAudioComponent.h

UCLASS(Config=Engine)
class UProspectAudioComponent : public UActorComponent
{
public:

    UFUNCTION() void OnLoadingScreenChanged(bool bIsLoadingScreenShowing);  // parameters 0x1
};
