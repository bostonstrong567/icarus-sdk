// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// size 0xE0, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneSkeletalAnimationTemplate.h

USTRUCT()
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    UPROPERTY() FFrameNumber SectionStartTime;  // 0x00D8, size 0x4
    UPROPERTY() FFrameNumber SectionEndTime;  // 0x00DC, size 0x4
};
