// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xE8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneSkeletalAnimationTrack.h

UCLASS(MinimalAPI)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> AnimationSections;  // 0x0098, size 0x10
    UPROPERTY() bool bUseLegacySectionIndexBlend;  // 0x00A8, size 0x1
    bool bAutoMatchClipsRootMotions;  // 0x00A9, not reflected
    UPROPERTY() FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;  // 0x00B0, size 0x30
    UPROPERTY(EditAnywhere) bool bBlendFirstChildOfRoot;  // 0x00E0, size 0x1

    // Virtual functions that start here:
    //   AddNewAnimation, AddNewAnimationOnRow
};
