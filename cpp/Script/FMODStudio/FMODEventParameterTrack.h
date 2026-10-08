// /Script/FMODStudio.FMODEventParameterTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/Sequencer/FMODEventParameterTrack.h

UCLASS(MinimalAPI)
class UFMODEventParameterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0098, size 0x10
};
