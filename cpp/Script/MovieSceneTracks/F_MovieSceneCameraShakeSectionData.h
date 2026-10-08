// /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
// size 0x20, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraShakeSection.h

USTRUCT()
struct FMovieSceneCameraShakeSectionData
{
    UPROPERTY(EditAnywhere) TSubclassOf<UCameraShakeBase> ShakeClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float PlayScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) ECameraShakePlaySpace PlaySpace;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere) FRotator UserDefinedPlaySpace;  // 0x0010, size 0xC
};
