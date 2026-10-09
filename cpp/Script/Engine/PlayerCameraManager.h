// /Script/Engine.PlayerCameraManager
// Derives from: AActor > UObject
// size 0x2810, declared in Engine/Source/Runtime/Engine/Classes/Camera/PlayerCameraManager.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class APlayerCameraManager : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Transient) APlayerController* PCOwner;  // 0x0220, size 0x8
    FName CameraStyle;  // 0x0230, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultFOV;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultOrthoWidth;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultAspectRatio;  // 0x0248, size 0x4
    FLinearColor FadeColor;  // 0x024C, not reflected
    float FadeAmount;  // 0x025C, not reflected
    FVector ColorScale;  // 0x0260, not reflected
    FVector DesiredColorScale;  // 0x026C, not reflected
    FVector OriginalColorScale;  // 0x0278, not reflected
    float ColorScaleInterpDuration;  // 0x0284, not reflected
    float ColorScaleInterpStartTime;  // 0x0288, not reflected
    UPROPERTY(Transient) FCameraCacheEntry CameraCache;  // 0x0290, size 0x600
    UPROPERTY(Transient) FCameraCacheEntry LastFrameCameraCache;  // 0x0890, size 0x600
    UPROPERTY(Transient) FTViewTarget ViewTarget;  // 0x0E90, size 0x610
    UPROPERTY(Transient) FTViewTarget PendingViewTarget;  // 0x14A0, size 0x610
    float BlendTimeToGo;  // 0x1AB0, not reflected
    FViewTargetTransitionParams BlendParams;  // 0x1AB4, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<TSubclassOf<UCameraModifier>> DefaultModifiers;  // 0x26F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FreeCamDistance;  // 0x2700, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FreeCamOffset;  // 0x2704, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetOffset;  // 0x2710, size 0xC
    UPROPERTY(Transient, BlueprintAssignable) FOnAudioFadeChangeSignature OnAudioFadeChangeEvent;  // 0x2720, size 0x10
    FVector2D FadeAlpha;  // 0x2730, not reflected
    float FadeTime;  // 0x2738, not reflected
    float FadeTimeRemaining;  // 0x273C, not reflected
    UPROPERTY(Transient) TArray<UCameraAnimInst*> ActiveAnims;  // 0x27B8, size 0x10
    uint32 : 1 bDebugClientSideCamera;  // 0x27E0, not reflected
    uint32 : 1 bEnableColorScaleInterp;  // 0x27E0, not reflected
    uint32 : 1 bEnableColorScaling;  // 0x27E0, not reflected
    uint32 : 1 bEnableFading;  // 0x27E0, not reflected
    uint32 : 1 bFadeAudio;  // 0x27E0, not reflected
    uint32 : 1 bShouldSendClientSideCameraUpdate;  // 0x27E0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsOrthographic : 1;  // 0x27E0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDefaultConstrainAspectRatio : 1;  // 0x27E0, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bClientSimulatingViewTarget : 1;  // 0x27E0, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseClientSideCameraUpdates : 1;  // 0x27E0, mask 0x80
    UPROPERTY(Transient, BlueprintReadOnly) uint8 bGameCameraCutThisFrame : 1;  // 0x27E1, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewPitchMin;  // 0x27E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewPitchMax;  // 0x27E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewYawMin;  // 0x27EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewYawMax;  // 0x27F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewRollMin;  // 0x27F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewRollMax;  // 0x27F8, size 0x4
protected:
    float LockedFOV;  // 0x023C, not reflected
    float LockedOrthoWidth;  // 0x0244, not reflected
    UPROPERTY(Transient) TArray<UCameraModifier*> ModifierList;  // 0x26E0, size 0x10
    UPROPERTY(Transient) TArray<AEmitterCameraLensEffectBase*> CameraLensEffects;  // 0x2740, size 0x10
    UPROPERTY(Transient) UCameraModifier_CameraShake* CachedCameraShakeMod;  // 0x2750, size 0x8
    UPROPERTY(Transient) UCameraAnimInst* AnimInstPool;  // 0x2758, size 0x8
    UPROPERTY(Transient) TArray<FPostProcessSettings> PostProcessBlendCache;  // 0x2798, size 0x10
    TArray<float,TSizedDefaultAllocator<32> > PostProcessBlendCacheWeights;  // 0x27A8, not reflected
    UPROPERTY(Transient) TArray<UCameraAnimInst*> FreeAnims;  // 0x27C8, size 0x10
    UPROPERTY(Transient) ACameraActor* AnimCameraActor;  // 0x27D8, size 0x8
    uint32 : 1 bAlwaysApplyModifiers;  // 0x27E0, not reflected
    uint32 : 1 bAutoAnimateFade;  // 0x27E0, not reflected
    uint32 : 1 bHoldFadeWhenFinished;  // 0x27E0, not reflected
    FTimerHandle SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle;  // 0x2808, not reflected
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* TransformComponent;  // 0x0228, size 0x8
    APlayerCameraManager::FOnBlendComplete OnBlendCompleteEvent;  // 0x1AC8, not reflected
    UPROPERTY(Transient) FCameraCacheEntry CameraCachePrivate;  // 0x1AE0, size 0x600
    UPROPERTY(Transient) FCameraCacheEntry LastFrameCameraCachePrivate;  // 0x20E0, size 0x600
    float TimeSinceLastServerUpdateCamera;  // 0x27FC, not reflected
    UPROPERTY(Config) float ServerUpdateCameraTimeout;  // 0x2800, size 0x4
public:
    UFUNCTION(BlueprintCallable) AEmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable) UCameraModifier* AddNewCameraModifier(TSubclassOf<UCameraModifier> ModifierClass);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) bool BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void ClearCameraLensEffects();
    UFUNCTION(BlueprintCallable) UCameraModifier* FindCameraModifierByClass(TSubclassOf<UCameraModifier> ModifierClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetCameraLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetCameraRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFOVAngle() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) APlayerController* GetOwningPlayerController() const;  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent) void OnPhotographyMultiPartCaptureEnd();
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent) void OnPhotographyMultiPartCaptureStart();
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent) void OnPhotographySessionEnd();
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent) void OnPhotographySessionStart();
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent) void PhotographyCameraModify(FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& ResultCameraLocation);  // parameters 0x30
    UFUNCTION(BlueprintCallable) UCameraAnimInst* PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool RemoveCameraModifier(UCameraModifier* ModifierToRemove);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetGameCameraCutThisFrame();
    UFUNCTION(BlueprintCallable) void SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);  // parameters 0x1E
    UFUNCTION(BlueprintCallable) UCameraShakeBase* StartCameraShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);  // parameters 0x28
    UFUNCTION(BlueprintCallable) UCameraShakeBase* StartCameraShakeFromSource(TSubclassOf<UCameraShakeBase> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void StopAllCameraAnims(bool bImmediate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopAllCameraShakes(bool bImmediately);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopAllCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void StopAllInstancesOfCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void StopAllInstancesOfCameraShakeFromSource(TSubclassOf<UCameraShakeBase> Shake, UCameraShakeSourceComponent* SourceComponent, bool bImmediately);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void StopCameraFade();
    UFUNCTION(BlueprintCallable) void StopCameraShake(UCameraShakeBase* ShakeInstance, bool bImmediately);  // parameters 0x9
    UFUNCTION() void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();

    // Virtual functions that start here:
    //   AddCameraLensEffect, AddCameraModifierToList, AddNewCameraModifier, AllowPhotographyMode
    //   ApplyAudioFade, ApplyCameraModifiers, AssignViewTarget, ClearCameraLensEffects, DoUpdateCamera
    //   FindCameraLensEffect, FindCameraModifierByClass, GetCameraCachePOV, GetCameraLocation
    //   GetCameraRotation, GetCameraViewPoint, GetFOVAngle, GetLastFrameCameraCachePOV, GetOrthoWidth
    //   GetOwningPlayerController, InitializeFor, IsOrthographic, LimitViewPitch, LimitViewRoll
    //   LimitViewYaw, OnPhotographyMultiPartCaptureEnd_Implementation
    //   OnPhotographyMultiPartCaptureStart_Implementation, OnPhotographySessionEnd_Implementation
    //   OnPhotographySessionStart_Implementation, PhotographyCameraModify_Implementation, PlayCameraAnim
    //   ProcessViewRotation, RemoveCameraLensEffect, RemoveCameraModifier, SetCameraCachePOV
    //   SetDesiredColorScale, SetFOV, SetLastFrameCameraCachePOV, SetManualCameraFade, SetOrthoWidth
    //   SetViewTarget, StartCameraFade, StartCameraShake, StartCameraShakeFromSource, StopAllCameraAnims
    //   StopAllCameraShakes, StopAllCameraShakesFromSource, StopAllInstancesOfCameraAnim
    //   StopAllInstancesOfCameraShake, StopAllInstancesOfCameraShakeFromSource, StopAudioFade
    //   StopCameraAnimInst, StopCameraFade, StopCameraShake, UnlockFOV, UnlockOrthoWidth, UpdateCamera
    //   UpdateCameraLensEffects, UpdateCameraPhotographyOnly, UpdatePhotographyCamera
    //   UpdatePhotographyPostProcessing, UpdateViewTarget, UpdateViewTargetInternal
};
