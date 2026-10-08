// /Script/FMODStudio.FMODEventControlTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/Sequencer/FMODEventControlTrack.h

UCLASS(MinimalAPI)
class UFMODEventControlTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> ControlSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewSection, GetAllControlSections
};
