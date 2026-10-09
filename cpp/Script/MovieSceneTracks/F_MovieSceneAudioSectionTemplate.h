// /Script/MovieSceneTracks.MovieSceneAudioSectionTemplate
// size 0x28, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneAudioTemplate.h

USTRUCT()
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
public:
    UPROPERTY(Instanced) UMovieSceneAudioSection* AudioSection;  // 0x0020, size 0x8
};
