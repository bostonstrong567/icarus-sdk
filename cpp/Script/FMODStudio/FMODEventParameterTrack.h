// /Script/FMODStudio.FMODEventParameterTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/Sequencer/FMODEventParameterTrack.h

UCLASS(MinimalAPI)
class UFMODEventParameterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0098, size 0x10
};
