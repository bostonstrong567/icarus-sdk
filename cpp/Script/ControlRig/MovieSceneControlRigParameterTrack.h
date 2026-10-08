// /Script/ControlRig.MovieSceneControlRigParameterTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xC8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/MovieSceneControlRigParameterTrack.h

UCLASS(MinimalAPI)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer, public INodeAndChannelMappings
{
public:
    UPROPERTY() UControlRig* ControlRig;  // 0x00A0, size 0x8
    UPROPERTY(Instanced) UMovieSceneSection* SectionToKey;  // 0x00A8, size 0x8
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x00B0, size 0x10
    UPROPERTY() FName TrackName;  // 0x00C0, size 0x8
};
