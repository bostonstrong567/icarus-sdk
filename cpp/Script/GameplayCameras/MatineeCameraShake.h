// /Script/GameplayCameras.MatineeCameraShake
// Derives from: UCameraShakeBase > UObject
// size 0x1B0, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/MatineeCameraShake.h

UCLASS(EditInlineNew)
class UMatineeCameraShake : public UCameraShakeBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) float OscillationDuration;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere) float OscillationBlendInTime;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere) float OscillationBlendOutTime;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FROscillator RotOscillation;  // 0x00B4, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVOscillator LocOscillation;  // 0x00D8, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFOscillator FOVOscillation;  // 0x00FC, size 0xC
    UPROPERTY(EditAnywhere) float AnimPlayRate;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere) float AnimScale;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere) float AnimBlendInTime;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere) float AnimBlendOutTime;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere) float RandomAnimSegmentDuration;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere) UCameraAnim* Anim;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere) UCameraAnimationSequence* AnimSequence;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere) uint8 bRandomAnimSegment : 1;  // 0x0130, mask 0x01
    UPROPERTY(Transient, BlueprintReadOnly) float OscillatorTimeRemaining;  // 0x0134, size 0x4
    UPROPERTY(Transient, BlueprintReadOnly) UCameraAnimInst* AnimInst;  // 0x0138, size 0x8
protected:
    FVector LocSinOffset;  // 0x0140, not reflected
    FVector RotSinOffset;  // 0x014C, not reflected
    float FOVSinOffset;  // 0x0158, not reflected
    FVector InitialLocSinOffset;  // 0x015C, not reflected
    FVector InitialRotSinOffset;  // 0x0168, not reflected
    float InitialFOVSinOffset;  // 0x0174, not reflected
    TWeakObjectPtr<AActor,FWeakObjectPtr> TempCameraActorForCameraAnims;  // 0x0178, not reflected
    UPROPERTY(Instanced) USequenceCameraShakePattern* SequenceShakePattern;  // 0x0180, size 0x8
    FCameraShakeState SequenceShakeState;  // 0x0188, not reflected
private:
    float CurrentBlendInTime;  // 0x01A0, not reflected
    float CurrentBlendOutTime;  // 0x01A4, not reflected
    bool : 1 bBlendingIn;  // 0x01A8, not reflected
    bool : 1 bBlendingOut;  // 0x01A8, not reflected
public:
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);  // parameters 0xBF0
    UFUNCTION(BlueprintNativeEvent) bool ReceiveIsFinished() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceivePlayShake(float Scale);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveStopShake(bool bImmediately);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static UMatineeCameraShake* StartMatineeCameraShake(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UMatineeCameraShake* StartMatineeCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);  // parameters 0x38

    // Virtual functions that start here:
    //   ReceiveIsFinished_Implementation
};
