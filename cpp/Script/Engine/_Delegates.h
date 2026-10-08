DELEGATE() bool ViewportDisplayCallback(FText& OutText, FLinearColor& OutColor);  // parameters 0x29
DELEGATE() void ActorBeginCursorOverSignature(AActor* TouchedActor);  // parameters 0x8
DELEGATE() void ActorBeginOverlapSignature(AActor* OverlappedActor, AActor* OtherActor);  // parameters 0x10
DELEGATE() void ActorBeginTouchOverSignature(TEnumAsByte<ETouchIndex> FingerIndex, AActor* TouchedActor);  // parameters 0x10
DELEGATE() void ActorComponentActivatedSignature(UActorComponent* Component, bool bReset);  // parameters 0x9
DELEGATE() void ActorComponentDeactivateSignature(UActorComponent* Component);  // parameters 0x8
DELEGATE() void ActorDestroyedSignature(AActor* DestroyedActor);  // parameters 0x8
DELEGATE() void ActorEndCursorOverSignature(AActor* TouchedActor);  // parameters 0x8
DELEGATE() void ActorEndOverlapSignature(AActor* OverlappedActor, AActor* OtherActor);  // parameters 0x10
DELEGATE() void ActorEndPlaySignature(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
DELEGATE() void ActorEndTouchOverSignature(TEnumAsByte<ETouchIndex> FingerIndex, AActor* TouchedActor);  // parameters 0x10
DELEGATE() void ActorHitSignature(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xA4
DELEGATE() void ActorOnClickedSignature(AActor* TouchedActor, FKey ButtonPressed);  // parameters 0x20
DELEGATE() void ActorOnInputTouchBeginSignature(TEnumAsByte<ETouchIndex> FingerIndex, AActor* TouchedActor);  // parameters 0x10
DELEGATE() void ActorOnInputTouchEndSignature(TEnumAsByte<ETouchIndex> FingerIndex, AActor* TouchedActor);  // parameters 0x10
DELEGATE() void ActorOnReleasedSignature(AActor* TouchedActor, FKey ButtonReleased);  // parameters 0x20
DELEGATE() void ApplicationLifetimeDelegate();
DELEGATE() void ApplicationStartupArgumentsDelegate(const TArray<FString>& StartupArguments);  // parameters 0x10
DELEGATE() void CharacterMovementUpdatedSignature(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);  // parameters 0x1C
DELEGATE() void CharacterReachedApexSignature();
DELEGATE() void ComponentBeginCursorOverSignature(UPrimitiveComponent* TouchedComponent);  // parameters 0x8
DELEGATE() void ComponentBeginOverlapSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
DELEGATE() void ComponentBeginTouchOverSignature(TEnumAsByte<ETouchIndex> FingerIndex, UPrimitiveComponent* TouchedComponent);  // parameters 0x10
DELEGATE() void ComponentCollisionSettingsChangedSignature(UPrimitiveComponent* ChangedComponent);  // parameters 0x8
DELEGATE() void ComponentEndCursorOverSignature(UPrimitiveComponent* TouchedComponent);  // parameters 0x8
DELEGATE() void ComponentEndOverlapSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
DELEGATE() void ComponentEndTouchOverSignature(TEnumAsByte<ETouchIndex> FingerIndex, UPrimitiveComponent* TouchedComponent);  // parameters 0x10
DELEGATE() void ComponentHitSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
DELEGATE() void ComponentOnClickedSignature(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);  // parameters 0x20
DELEGATE() void ComponentOnInputTouchBeginSignature(TEnumAsByte<ETouchIndex> FingerIndex, UPrimitiveComponent* TouchedComponent);  // parameters 0x10
DELEGATE() void ComponentOnInputTouchEndSignature(TEnumAsByte<ETouchIndex> FingerIndex, UPrimitiveComponent* TouchedComponent);  // parameters 0x10
DELEGATE() void ComponentOnReleasedSignature(UPrimitiveComponent* TouchedComponent, FKey ButtonReleased);  // parameters 0x20
DELEGATE() void ComponentSleepSignature(UPrimitiveComponent* SleepingComponent, FName BoneName);  // parameters 0x10
DELEGATE() void ComponentWakeSignature(UPrimitiveComponent* WakingComponent, FName BoneName);  // parameters 0x10
DELEGATE() void ConstraintBrokenSignature(int32 ConstraintIndex);  // parameters 0x4
DELEGATE() void EmptyOnlineDelegate();
DELEGATE() void InputActionHandlerDynamicSignature(FKey Key);  // parameters 0x18
DELEGATE() void InputAxisHandlerDynamicSignature(float AxisValue);  // parameters 0x4
DELEGATE() void InputGestureHandlerDynamicSignature(float Value);  // parameters 0x4
DELEGATE() void InputTouchHandlerDynamicSignature(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);  // parameters 0x10
DELEGATE() void InputVectorAxisHandlerDynamicSignature(FVector AxisValue);  // parameters 0xC
DELEGATE() void IsRootComponentChanged(USceneComponent* UpdatedComponent, bool bIsRootComponent);  // parameters 0x9
DELEGATE() void LandedSignature(const FHitResult& Hit);  // parameters 0x88
DELEGATE() void LevelStreamingLoadedStatus();
DELEGATE() void LevelStreamingVisibilityStatus();
DELEGATE() void MovementModeChangedSignature(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);  // parameters 0xA
DELEGATE() void OnAllMontageInstancesEndedMCDelegate();
DELEGATE() void OnAnimInitialized();
DELEGATE() void OnAssetClassLoaded(TSubclassOf<UObject> Loaded);  // parameters 0x8
DELEGATE() void OnAssetLoaded(UObject* Loaded);  // parameters 0x8
DELEGATE() void OnAsyncHandleSaveGame(USaveGame* SaveGame, bool bSuccess);  // parameters 0x9
DELEGATE() void OnAudioFadeChangeSignature(bool bFadeOut, float FadeTime);  // parameters 0x8
DELEGATE() void OnAudioFinished();
DELEGATE() void OnAudioMultiEnvelopeValue(float AverageEnvelopeValue, float MaxEnvelope, int32 NumWaveInstances);  // parameters 0xC
DELEGATE() void OnAudioPlayStateChanged(EAudioComponentPlayState PlayState);  // parameters 0x1
DELEGATE() void OnAudioPlaybackPercent(USoundWave* PlayingSoundWave, float PlaybackPercent);  // parameters 0xC
DELEGATE() void OnAudioSingleEnvelopeValue(USoundWave* PlayingSoundWave, float EnvelopeValue);  // parameters 0xC
DELEGATE() void OnAudioVirtualizationChanged(bool bIsVirtualized);  // parameters 0x1
DELEGATE() void OnBoneTransformsFinalized();
DELEGATE() void OnCanvasRenderTargetUpdate(UCanvas* Canvas, int32 Width, int32 Height);  // parameters 0x10
DELEGATE() void OnDataDrivenCVarChanged(FString CVarName);  // parameters 0x10
DELEGATE() void OnForceFeedbackFinished(UForceFeedbackComponent* ForceFeedbackComponent);  // parameters 0x8
DELEGATE() void OnGameUserSettingsUINeedsUpdate();
DELEGATE() void OnInterpToResetDelegate(const FHitResult& ImpactResult, float Time);  // parameters 0x8C
DELEGATE() void OnInterpToReverseDelegate(const FHitResult& ImpactResult, float Time);  // parameters 0x8C
DELEGATE() void OnInterpToStopDelegate(const FHitResult& ImpactResult, float Time);  // parameters 0x8C
DELEGATE() void OnInterpToWaitBeginDelegate(const FHitResult& ImpactResult, float Time);  // parameters 0x8C
DELEGATE() void OnInterpToWaitEndDelegate(const FHitResult& ImpactResult, float Time);  // parameters 0x8C
DELEGATE() void OnLowPowerModeDelegate(bool bInLowPowerMode);  // parameters 0x1
DELEGATE() void OnMatineeEvent();
DELEGATE() void OnMontageBlendingOutStartedMCDelegate(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
DELEGATE() void OnMontageEndedMCDelegate(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
DELEGATE() void OnMontageStartedMCDelegate(UAnimMontage* Montage);  // parameters 0x8
DELEGATE() void OnPawnControllerChanged(APawn* Pawn, AController* Controller);  // parameters 0x10
DELEGATE() void OnPrimaryAssetBundlesChanged();
DELEGATE() void OnPrimaryAssetClassListLoaded(const TArray<TSubclassOf<UObject>>& Loaded);  // parameters 0x10
DELEGATE() void OnPrimaryAssetClassLoaded(TSubclassOf<UObject> Loaded);  // parameters 0x8
DELEGATE() void OnPrimaryAssetListLoaded(const TArray<UObject*>& Loaded);  // parameters 0x10
DELEGATE() void OnPrimaryAssetLoaded(UObject* Loaded);  // parameters 0x8
DELEGATE() void OnProjectileBounceDelegate(const FHitResult& ImpactResult, const FVector& ImpactVelocity);  // parameters 0x94
DELEGATE() void OnProjectileStopDelegate(const FHitResult& ImpactResult);  // parameters 0x88
DELEGATE() void OnQuartzCommandEvent(EQuartzCommandDelegateSubType EventType, FName Name);  // parameters 0xC
DELEGATE() void OnQuartzCommandEventBP(EQuartzCommandDelegateSubType EventType, FName Name);  // parameters 0xC
DELEGATE() void OnQuartzMetronomeEvent(FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);  // parameters 0x18
DELEGATE() void OnQuartzMetronomeEventBP(FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);  // parameters 0x18
DELEGATE() void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);  // parameters 0x14
DELEGATE() void OnSubmixEnvelope(const TArray<float>& Envelope);  // parameters 0x10
DELEGATE() void OnSubmixEnvelopeBP(const TArray<float>& Envelope);  // parameters 0x10
DELEGATE() void OnSubmixRecordedFileDone(USoundWave* ResultingSoundWave);  // parameters 0x8
DELEGATE() void OnSubmixSpectralAnalysis(const TArray<float>& Magnitudes);  // parameters 0x10
DELEGATE() void OnSubmixSpectralAnalysisBP(const TArray<float>& Magnitude);  // parameters 0x10
DELEGATE() void OnSystemFinished(UParticleSystemComponent* PSystem);  // parameters 0x8
DELEGATE() void OnTemperatureChangeDelegate(ETemperatureSeverityType Severity);  // parameters 0x1
DELEGATE() void OnTimelineEvent();
DELEGATE() void OnTimelineFloat(float Output);  // parameters 0x4
DELEGATE() void OnTimelineLinearColor(FLinearColor Output);  // parameters 0x10
DELEGATE() void OnTimelineVector(FVector Output);  // parameters 0xC
DELEGATE() void OnUserClickedBanner();
DELEGATE() void OnUserClosedAdvertisement();
DELEGATE() void OnlineErrorDelegate(FString ErrorReason);  // parameters 0x10
DELEGATE() void ParticleBurstSignature(FName EventName, float EmitterTime, int32 ParticleCount);  // parameters 0x10
DELEGATE() void ParticleCollisionSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);  // parameters 0x50
DELEGATE() void ParticleDeathSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction);  // parameters 0x34
DELEGATE() void ParticleSpawnSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity);  // parameters 0x24
DELEGATE() void PhysicsVolumeChanged(APhysicsVolume* NewVolume);  // parameters 0x8
DELEGATE() void PlatformDelegate();
DELEGATE() void PlatformEventDelegate();
DELEGATE() void PlatformFailedToRegisterForRemoteNotificationsDelegate(FString inString);  // parameters 0x10
DELEGATE() void PlatformInterfaceDelegate(const FPlatformInterfaceDelegateResult& Result);  // parameters 0x38
DELEGATE() void PlatformReceivedLocalNotificationDelegate(FString inString, int32 inInt, TEnumAsByte<EApplicationState> inAppState);  // parameters 0x15
DELEGATE() void PlatformReceivedRemoteNotificationDelegate(FString inString, TEnumAsByte<EApplicationState> inAppState);  // parameters 0x11
DELEGATE() void PlatformRegisteredForRemoteNotificationsDelegate(const TArray<uint8>& inArray);  // parameters 0x10
DELEGATE() void PlatformRegisteredForUserNotificationsDelegate(int32 inInt);  // parameters 0x4
DELEGATE() void PlatformScreenOrientationChangedDelegate(TEnumAsByte<EScreenOrientation> inScreenOrientation);  // parameters 0x1
DELEGATE() void PlatformStartupArgumentsDelegate(const TArray<FString>& StartupArguments);  // parameters 0x10
DELEGATE() void PlayMontageAnimNotifyDelegate(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);  // parameters 0x28
DELEGATE() void PostEvaluateAnimEvent();
DELEGATE() void TakeAnyDamageSignature(AActor* DamagedActor, float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x28
DELEGATE() void TakePointDamageSignature(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, UDamageType* DamageType, AActor* DamageCauser);  // parameters 0x58
DELEGATE() void TakeRadialDamageSignature(AActor* DamagedActor, float Damage, UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0xC0
DELEGATE() void TimerDynamicDelegate();
DELEGATE(BlueprintAuthorityOnly) void InstigatedAnyDamageSignature(float Damage, UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);  // parameters 0x20
