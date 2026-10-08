// /Script/FMODStudio.FMODEventControlSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x180, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/Sequencer/FMODEventControlSection.h

UCLASS(MinimalAPI)
class UFMODEventControlSection : public UMovieSceneSection
{
public:
    UPROPERTY() FFMODEventControlChannel ControlKeys;  // 0x00E8, size 0x98
};
