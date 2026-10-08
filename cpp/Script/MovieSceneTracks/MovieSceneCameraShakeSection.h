// /Script/MovieSceneTracks.MovieSceneCameraShakeSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x128, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraShakeSection.h

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere) FMovieSceneCameraShakeSectionData ShakeData;  // 0x00E8, size 0x20
    UPROPERTY(Deprecated) TSubclassOf<UCameraShakeBase> ShakeClass;  // 0x0108, size 0x8
    UPROPERTY(Deprecated) float PlayScale;  // 0x0110, size 0x4
    UPROPERTY(Deprecated) ECameraShakePlaySpace PlaySpace;  // 0x0114, size 0x1
    UPROPERTY(Deprecated) FRotator UserDefinedPlaySpace;  // 0x0118, size 0xC
};
