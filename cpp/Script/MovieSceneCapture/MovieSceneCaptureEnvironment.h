// /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/MovieSceneCapture/Public/MovieSceneCaptureEnvironment.h

UCLASS()
class UMovieSceneCaptureEnvironment : public UObject
{
public:

    UFUNCTION(BlueprintCallable) static UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetCaptureElapsedTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetCaptureFrameNumber();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static bool IsCaptureInProgress();  // parameters 0x1
};
