// /Script/MovieSceneTracks.MovieSceneCameraAnimSectionData
// size 0x20, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraAnimSection.h

USTRUCT()
struct FMovieSceneCameraAnimSectionData
{
    UPROPERTY(EditAnywhere) UCameraAnim* CameraAnim;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float PlayRate;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float PlayScale;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float BlendInTime;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float BlendOutTime;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) bool bLooping;  // 0x0018, size 0x1

    // Not reflected:
    bool bRandomStartTime;  // 0x0019
};
