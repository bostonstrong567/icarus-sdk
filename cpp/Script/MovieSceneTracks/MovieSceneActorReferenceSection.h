// /Script/MovieSceneTracks.MovieSceneActorReferenceSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x228, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h

UCLASS(MinimalAPI)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
    UPROPERTY() FMovieSceneActorReferenceData ActorReferenceData;  // 0x00E8, size 0xB0
    UPROPERTY(Deprecated) FIntegralCurve ActorGuidIndexCurve;  // 0x0198, size 0x80
    UPROPERTY(Deprecated) TArray<FString> ActorGuidStrings;  // 0x0218, size 0x10
};
