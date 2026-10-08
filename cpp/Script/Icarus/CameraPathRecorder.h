// /Script/Icarus.CameraPathRecorder
// Derives from: AActor > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/CameraPath/CameraPathRecorder.h

UCLASS(Config=Engine)
class ACameraPathRecorder : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComponentReference TargetComponent;  // 0x0220, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ReferenceActor;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PathFileName;  // 0x0250, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCaptureFOV;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SampleInterval;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlaybackSpeed;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLoop;  // 0x026C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTakeOverPlayerView;  // 0x026D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCameraPath CurrentPath;  // 0x0270, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ECameraPathMode Mode;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UCameraComponent* PlaybackCamera;  // 0x02A0, size 0x8
    UPROPERTY(Transient, Instanced) USceneComponent* RuntimeTargetOverride;  // 0x02A8, size 0x8
    UPROPERTY(Transient) AActor* CachedViewTarget;  // 0x02B0, size 0x8
    UPROPERTY(Transient, Instanced) UPostProcessComponent* SourcePostProcess;  // 0x02B8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bViewTakenOver;  // 0x02C0, private
    float ElapsedTime;  // 0x02C4, private
    float PlaybackTime;  // 0x02C8, private
    float TimeSinceLastSample;  // 0x02CC, private

    UFUNCTION(BlueprintCallable) void ClearPath();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesPathExist(FString InFilename) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void EvaluatePathAtTime(float InTime, AActor* InReference, FTransform& OutWorldTransform, float& OutFOV) const;  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRecording() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LoadPathFromFile();
    UFUNCTION(BlueprintCallable) void PlayPathOnComponent(USceneComponent* InTarget, AActor* InReference);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SavePathToFile();
    UFUNCTION(BlueprintCallable) void SetFilename(FString InFilename);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StartPlayback();
    UFUNCTION(BlueprintCallable) void StartRecording();
    UFUNCTION(BlueprintCallable) void StartRecordingComponent(USceneComponent* InTarget, AActor* InReference);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StopPlayback();
    UFUNCTION(BlueprintCallable) void StopRecording();
};
