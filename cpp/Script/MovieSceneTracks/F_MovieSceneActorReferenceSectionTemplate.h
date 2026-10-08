// /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// size 0xE8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneActorReferenceTemplate.h

USTRUCT()
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
    UPROPERTY() FMovieScenePropertySectionData PropertyData;  // 0x0020, size 0x18
    UPROPERTY() FMovieSceneActorReferenceData ActorReferenceData;  // 0x0038, size 0xB0
};
