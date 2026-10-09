// /Script/MovieSceneTracks.MovieSceneCameraAnimSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x128, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraAnimSection.h

UCLASS(MinimalAPI)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FMovieSceneCameraAnimSectionData AnimData;  // 0x00E8, size 0x20
private:
    UPROPERTY(Deprecated) UCameraAnim* CameraAnim;  // 0x0108, size 0x8
    UPROPERTY(Deprecated) float PlayRate;  // 0x0110, size 0x4
    UPROPERTY(Deprecated) float PlayScale;  // 0x0114, size 0x4
    UPROPERTY(Deprecated) float BlendInTime;  // 0x0118, size 0x4
    UPROPERTY(Deprecated) float BlendOutTime;  // 0x011C, size 0x4
    UPROPERTY(Deprecated) bool bLooping;  // 0x0120, size 0x1
};
