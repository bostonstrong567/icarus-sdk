// /Script/Engine.PlayerController
// Derives from: AController > AActor > UObject
// size 0x590, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerController.h

UCLASS(NotPlaceable, Config=Game)
class APlayerController : public AController
{
public:
    UPROPERTY() UPlayer* Player;  // 0x0298, size 0x8
    UPROPERTY() APawn* AcknowledgedPawn;  // 0x02A0, size 0x8
    UPROPERTY(Transient) UInterpTrackInstDirector* ControllingDirTrackInst;  // 0x02A8, size 0x8
    UPROPERTY() AHUD* MyHUD;  // 0x02B0, size 0x8
    UPROPERTY(BlueprintReadOnly) APlayerCameraManager* PlayerCameraManager;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<APlayerCameraManager> PlayerCameraManagerClass;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere) bool bAutoManageActiveCameraTarget;  // 0x02C8, size 0x1
    UPROPERTY(Replicated) FRotator TargetViewRotation;  // 0x02CC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmoothTargetViewRotationSpeed;  // 0x02E4, size 0x4
    UPROPERTY() TArray<AActor*> HiddenActors;  // 0x02F0, size 0x10
    UPROPERTY() TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents;  // 0x0300, size 0x10
    UPROPERTY() float LastSpectatorStateSynchTime;  // 0x0314, size 0x4
    UPROPERTY(Transient) FVector LastSpectatorSyncLocation;  // 0x0318, size 0xC
    UPROPERTY(Transient) FRotator LastSpectatorSyncRotation;  // 0x0324, size 0xC
    UPROPERTY() int32 ClientCap;  // 0x0330, size 0x4
    UPROPERTY(Transient, BlueprintReadOnly) UCheatManager* CheatManager;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCheatManager> CheatClass;  // 0x0340, size 0x8
    UPROPERTY(Transient) UPlayerInput* PlayerInput;  // 0x0348, size 0x8
    UPROPERTY(Transient) TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bPlayerIsWaiting : 1;  // 0x03D0, mask 0x10
    UPROPERTY() uint8 NetPlayerIndex;  // 0x03D4, size 0x1
    UPROPERTY() UNetConnection* PendingSwapConnection;  // 0x0410, size 0x8
    UPROPERTY() UNetConnection* NetConnection;  // 0x0418, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float InputYawScale;  // 0x042C, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float InputPitchScale;  // 0x0430, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float InputRollScale;  // 0x0434, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShowMouseCursor : 1;  // 0x0438, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableClickEvents : 1;  // 0x0438, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableTouchEvents : 1;  // 0x0438, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableMouseOverEvents : 1;  // 0x0438, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableTouchOverEvents : 1;  // 0x0438, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bForceFeedbackEnabled : 1;  // 0x0438, mask 0x20
    UPROPERTY(Config) float ForceFeedbackScale;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FKey> ClickEventKeys;  // 0x0440, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EMouseCursor> DefaultMouseCursor;  // 0x0450, size 0x1
    UPROPERTY(BlueprintReadWrite) TEnumAsByte<EMouseCursor> CurrentMouseCursor;  // 0x0451, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel;  // 0x0452, size 0x1
    UPROPERTY(BlueprintReadWrite) TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel;  // 0x0453, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitResultTraceDistance;  // 0x0454, size 0x4
    UPROPERTY() uint16 SeamlessTravelCount;  // 0x0458, size 0x2
    UPROPERTY() uint16 LastCompletedSeamlessTravelCount;  // 0x045A, size 0x2
    UPROPERTY(Instanced) UInputComponent* InactiveStateInputComponent;  // 0x04D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShouldPerformFullTickWhenPaused : 1;  // 0x04D8, mask 0x04
    UPROPERTY() UTouchInterface* CurrentTouchInterface;  // 0x04F0, size 0x8
    UPROPERTY() ASpectatorPawn* SpectatorPawn;  // 0x0548, size 0x8
    UPROPERTY() bool bIsLocalPlayerController;  // 0x0554, size 0x1
    UPROPERTY(Replicated) FVector SpawnLocation;  // 0x0558, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFreezeWorldComposition;  // 0x056C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector CachedCameraLocation;  // 0x0570, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator CachedCameraRotation;  // 0x057C, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    FRotator BlendedTargetViewRotation;  // 0x02D8
    float LocalPlayerCachedLODDistanceFactor;  // 0x02E8
    bool bRenderPrimitiveComponents;  // 0x0310
    TSortedMap<unsigned __int64,APlayerController::FDynamicForceFeedbackAction,TSizedDefaultAllocator<32>,TLess<unsigned __int64 const > > DynamicForceFeedbacks;  // 0x0360, private
    TSortedMap<int,FDynamicForceFeedbackDetails *,TSizedDefaultAllocator<32>,TLess<int const > > LatentDynamicForceFeedbacks;  // 0x0370, private
    TSharedPtr<FActiveHapticFeedbackEffect,0> ActiveHapticEffect_Left;  // 0x0380
    TSharedPtr<FActiveHapticFeedbackEffect,0> ActiveHapticEffect_Right;  // 0x0390
    TSharedPtr<FActiveHapticFeedbackEffect,0> ActiveHapticEffect_Gun;  // 0x03A0
    FForceFeedbackValues ForceFeedbackValues;  // 0x03B0
    TArray<FName,TSizedDefaultAllocator<32> > PendingMapChangeLevelNames;  // 0x03C0
    uint32 : 1 bShortConnectTimeOut;  // 0x03D0
    uint32 : 1 bCinematicMode;  // 0x03D0
    uint32 : 1 bHidePawnInCinematicMode;  // 0x03D0
    uint32 : 1 bIsUsingStreamingVolumes;  // 0x03D0
    FPlayerMuteList MuteList;  // 0x03D8
    FRotator RotationInput;  // 0x0420
    TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> CurrentClickablePrimitive;  // 0x045C, protected
    TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>[11] CurrentTouchablePrimitives;  // 0x0464, protected
    TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > CurrentInputStack;  // 0x04C0, protected
    uint32 : 1 bCinemaDisableInputMove;  // 0x04D8, protected
    uint32 : 1 bCinemaDisableInputLook;  // 0x04D8, protected
    uint32 : 1 bInputEnabled;  // 0x04D8, private
    TSharedPtr<SVirtualJoystick,0> VirtualJoystick;  // 0x04E0, protected
    FTimerHandle TimerHandle_UnFreeze;  // 0x04F8, protected
    FTimerHandle TimerHandle_DelayedPrepareMapChange;  // 0x0500, private
    FTimerHandle TimerHandle_ClientCommitMapChange;  // 0x0508, private
    uint32 : 1 bOverrideAudioListener;  // 0x0510, protected
    uint32 : 1 bOverrideAudioAttenuationListener;  // 0x0510, protected
    TWeakObjectPtr<USceneComponent,FWeakObjectPtr> AudioListenerComponent;  // 0x0514, protected
    TWeakObjectPtr<USceneComponent,FWeakObjectPtr> AudioListenerAttenuationComponent;  // 0x051C, protected
    FVector AudioListenerLocationOverride;  // 0x0524, protected
    FRotator AudioListenerRotationOverride;  // 0x0530, protected
    FVector AudioListenerAttenuationOverride;  // 0x053C, protected
    float LastRetryPlayerTime;  // 0x0550, private
    float LastMovementUpdateTime;  // 0x0564, protected
    float LastMovementHitch;  // 0x0568, protected
    bool : 1 bDisableHaptics;  // 0x0588, private

    UFUNCTION(BlueprintCallable) void ActivateTouchInterface(UTouchInterface* NewTouchInterface);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddPitchInput(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddRollInput(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddYawInput(float Val);  // parameters 0x4
    UFUNCTION(Exec) void Camera(FName NewMode);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool CanRestartPlayer();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ClearAudioListenerAttenuationOverride();
    UFUNCTION(BlueprintCallable) void ClearAudioListenerOverride();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation);  // parameters 0x11
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCancelPendingMapChange();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCapBandwidth(int32 Cap);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientClearCameraLensEffects();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCommitMapChange();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientEnableNetworkVoice(bool bEnable);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientEndOnlineSession();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientFlushLevelStreaming();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientForceGarbageCollection();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientGameEnded(AActor* EndGameFocus, bool bIsWinner);  // parameters 0x9
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientGotoState(FName NewState);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientIgnoreLookInput(bool bIgnore);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientIgnoreMoveInput(bool bIgnore);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientMessage(FString S, FName Type, float MsgLifeTime);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientMutePlayer(FUniqueNetIdRepl PlayerId);  // parameters 0x28
    UFUNCTION(BlueprintCallable, Client, BlueprintNativeEvent) void ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, FRotator CustomPlaySpace);  // parameters 0x28
    UFUNCTION(Client, BlueprintNativeEvent) void ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params);  // parameters 0x14
    UFUNCTION(Client, BlueprintNativeEvent) void ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);  // parameters 0x10
    UFUNCTION(Client, BlueprintNativeEvent) void ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);  // parameters 0xA
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);  // parameters 0x14
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage> Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject);  // parameters 0x28
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientRepObjRef(UObject* Object);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReset();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientRestart(APawn* NewPawn);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientRetryClientRestart(APawn* NewPawn);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReturnToMainMenu(FString ReturnReason);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReturnToMainMenuWithTextReason(FText ReturnReason);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetBlockOnAsyncLoading();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);  // parameters 0x16
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetCameraMode(FName NewCamMode);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);  // parameters 0x4
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientSetHUD(TSubclassOf<AHUD> NewHUDClass);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetSpectatorWaiting(bool bWaiting);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Client, BlueprintNativeEvent) void ClientSpawnCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Client, BlueprintNativeEvent) void ClientStartCameraShake(TSubclassOf<UCameraShakeBase> Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ClientStartCameraShakeFromSource(TSubclassOf<UCameraShakeBase> Shake, UCameraShakeSourceComponent* SourceComponent);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientStartOnlineSession();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientStopCameraAnim(UCameraAnim* AnimToStop);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientStopCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientTeamMessage(APlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);  // parameters 0x24
    UFUNCTION() void ClientTravel(FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);  // parameters 0x24
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientTravelInternal(FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);  // parameters 0x24
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId);  // parameters 0x28
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus> LevelStatuses);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientVoiceHandshakeComplete();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientWasKicked(FText KickReason);  // parameters 0x18
    UFUNCTION(Exec) void ConsoleKey(FKey Key);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection) const;  // parameters 0x21
    UFUNCTION(Exec) void EnableCheats();
    UFUNCTION(Exec) void FOV(float NewFOV);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetFocalLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) AHUD* GetHUD() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;  // parameters 0x8D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;  // parameters 0x8D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const;  // parameters 0x9D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;  // parameters 0x8D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;  // parameters 0x8D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const;  // parameters 0xA5
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInputAnalogKeyState(FKey Key) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float& StickX, float& StickY) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInputKeyTimeDown(FKey Key) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInputMouseDelta(float& DeltaX, float& DeltaY) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetInputVectorKeyState(FKey Key) const;  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetMousePosition(float& LocationX, float& LocationY) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) ASpectatorPawn* GetSpectatorPawn() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetViewportSize(int32& SizeX, int32& SizeY) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsInputKeyDown(FKey Key) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool IsWorldCompositionLevelStreamingEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);  // parameters 0x13
    UFUNCTION(Exec) void LocalTravel(FString URL);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void OnServerStartedVisualLogger(bool bIsLogging);  // parameters 0x1
    UFUNCTION(Exec) void Pause();
    UFUNCTION(BlueprintCallable) void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, FLatentActionInfo LatentInfo);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative) const;  // parameters 0x16
    UFUNCTION(BlueprintCallable) void ResetControllerLightColor();
    UFUNCTION(Exec) void RestartLevel();
    UFUNCTION(Exec) void SendToConsole(FString Command);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerAcknowledgePossession(APawn* P);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerCamera(FName NewMode);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerChangeName(FString S);  // parameters 0x10
    UFUNCTION(Server, BlueprintNativeEvent) void ServerCheckClientPossession();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerCheckClientPossessionReliable();
    UFUNCTION(Exec) void ServerExec(FString Msg);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerExecRPC(FString Msg);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerMutePlayer(FUniqueNetIdRepl PlayerId);  // parameters 0x28
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerNotifyLoadedWorld(FName WorldPackageName);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerPause();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerRestartPlayer();
    UFUNCTION(Server, BlueprintNativeEvent) void ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSetSpectatorWaiting(bool bWaiting);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerShortTimeout();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerToggleAILogging();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUnmutePlayer(FUniqueNetIdRepl PlayerId);  // parameters 0x28
    UFUNCTION(Server, BlueprintNativeEvent) void ServerUpdateCamera(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo LevelVisibility);  // parameters 0x14
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo> LevelVisibilities);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerVerifyViewTarget();
    UFUNCTION(Server, BlueprintNativeEvent) void ServerViewNextPlayer();
    UFUNCTION(Server, BlueprintNativeEvent) void ServerViewPrevPlayer();
    UFUNCTION(Server, BlueprintNativeEvent) void ServerViewSelf(FViewTargetTransitionParams TransitionParams);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetControllerLightColor(FColor Color);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDisableHaptics(bool bNewDisabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetMouseCursorWidget(TEnumAsByte<EMouseCursor> Cursor, UUserWidget* CursorWidget);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMouseLocation(int32 X, int32 Y);  // parameters 0x8
    UFUNCTION(Exec) void SetName(FString S);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetVirtualJoystickVisibility(bool bVisible);  // parameters 0x1
    UFUNCTION(Exec) void StartFire(uint8 FireModeNum);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopHapticEffect(EControllerHand Hand);  // parameters 0x1
    UFUNCTION(Exec) void SwitchLevel(FString URL);  // parameters 0x10
    UFUNCTION(Exec) void TestServerLevelVisibilityChange(FName PackageName, FName FileName);  // parameters 0x10
    UFUNCTION(Exec) void ToggleSpeaking(bool bInSpeaking);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WasInputKeyJustPressed(FKey Key) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WasInputKeyJustReleased(FKey Key) const;  // parameters 0x19

    // Virtual functions that start here:
    //   AcknowledgePossession, ActivateTouchInterface, AddCheats, AddPitchInput, AddRollInput, AddYawInput
    //   AutoManageActiveCameraTarget, BeginPlayingState, BeginSpectatingState, BuildInputStack, Camera
    //   CanRestartPlayer, CleanUpAudioComponents, CleanupGameViewport
    //   ClientCancelPendingMapChange_Implementation, ClientCapBandwidth_Implementation
    //   ClientClearCameraLensEffects, ClientClearCameraLensEffects_Implementation
    //   ClientCommitMapChange_Implementation, ClientEnableNetworkVoice
    //   ClientEnableNetworkVoice_Implementation, ClientEndOnlineSession_Implementation
    //   ClientForceGarbageCollection_Implementation, ClientGameEnded_Implementation
    //   ClientGotoState_Implementation, ClientIgnoreLookInput_Implementation
    //   ClientIgnoreMoveInput_Implementation, ClientMessage_Implementation, ClientMutePlayer
    //   ClientMutePlayer_Implementation, ClientPlayCameraAnim_Implementation
    //   ClientPlayForceFeedback_Internal_Implementation, ClientPlaySoundAtLocation_Implementation
    //   ClientPlaySound_Implementation, ClientPrepareMapChange_Implementation
    //   ClientPrestreamTextures_Implementation, ClientReceiveLocalizedMessage_Implementation
    //   ClientRepObjRef, ClientRepObjRef_Implementation, ClientReset_Implementation
    //   ClientRestart_Implementation, ClientRetryClientRestart_Implementation, ClientReturnToMainMenu
    //   ClientReturnToMainMenuWithTextReason, ClientReturnToMainMenuWithTextReason_Implementation
    //   ClientReturnToMainMenu_Implementation, ClientSetBlockOnAsyncLoading_Implementation
    //   ClientSetCameraFade_Implementation, ClientSetCameraMode_Implementation
    //   ClientSetCinematicMode_Implementation, ClientSetForceMipLevelsToBeResident_Implementation
    //   ClientSetHUD_Implementation, ClientSetSpectatorWaiting_Implementation
    //   ClientSetViewTarget_Implementation, ClientSpawnCameraLensEffect_Implementation
    //   ClientStartCameraShake_Implementation, ClientStartOnlineSession_Implementation
    //   ClientStopCameraAnim_Implementation, ClientStopCameraShake_Implementation
    //   ClientStopForceFeedback_Implementation, ClientTeamMessage_Implementation
    //   ClientTravelInternal_Implementation, ClientUnmutePlayer, ClientUnmutePlayer_Implementation
    //   ClientUpdateLevelStreamingStatus_Implementation
    //   ClientUpdateMultipleLevelsStreamingStatus_Implementation, ClientVoiceHandshakeComplete
    //   ClientVoiceHandshakeComplete_Implementation, ClientWasKicked_Implementation, ConsoleCommand
    //   ConsoleKey, CreateTouchInterface, CreateVirtualJoystick, DefaultCanUnpause, DelayedPrepareMapChange
    //   DestroySpectatorPawn, EnableCheats, EndPlayingState, EndSpectatingState, FOV, FlushPressedKeys
    //   GetAudioListenerAttenuationOverridePosition, GetAudioListenerPosition
    //   GetAutoActivateCameraForPlayer, GetFocalLocation, GetInputIndex, GetMinRespawnDelay, GetMouseCursor
    //   GetNextViewablePlayer, GetPlayerControllerForMuting, GetSeamlessTravelActorList, InitInputSystem
    //   InputAxis, InputKey, InputMotion, InputTouch, IsFrozen, IsInViewportClient, IsPlayerMuted
    //   IsWorldCompositionLevelStreamingEnabled_Implementation, LocalTravel, NotifyActorChannelFailure
    //   NotifyDirectorControl, NotifyLoadedWorld, NotifyServerReceivedClientData
    //   OnServerStartedVisualLogger_Implementation, Pause, PawnLeavingGame, PlayerTick, PopInputComponent
    //   PostProcessInput, PostProcessWorldToScreen, PostSeamlessTravel, PreClientTravel, PreProcessInput
    //   ProcessPlayerInput, PushInputComponent, ReceivedGameModeClass, ReceivedPlayer
    //   ReceivedSpectatorClass, ResetCameraMode, RestartLevel, SafeRetryClientRestart
    //   SafeServerCheckClientPossession, SeamlessTravelFrom, SeamlessTravelTo, SendClientAdjustment
    //   SendToConsole, ServerAcknowledgePossession_Implementation, ServerAcknowledgePossession_Validate
    //   ServerCamera_Implementation, ServerCamera_Validate, ServerChangeName_Implementation
    //   ServerChangeName_Validate, ServerCheckClientPossessionReliable_Implementation
    //   ServerCheckClientPossessionReliable_Validate, ServerCheckClientPossession_Implementation
    //   ServerCheckClientPossession_Validate, ServerExecRPC_Implementation, ServerExecRPC_Validate
    //   ServerMutePlayer, ServerMutePlayer_Implementation, ServerMutePlayer_Validate
    //   ServerPause_Implementation, ServerPause_Validate, ServerRestartPlayer_Implementation
    //   ServerRestartPlayer_Validate, ServerSetSpectatorLocation_Implementation
    //   ServerSetSpectatorLocation_Validate, ServerSetSpectatorWaiting_Implementation
    //   ServerSetSpectatorWaiting_Validate, ServerShortTimeout_Implementation, ServerShortTimeout_Validate
    //   ServerToggleAILogging_Implementation, ServerToggleAILogging_Validate, ServerUnmutePlayer
    //   ServerUnmutePlayer_Implementation, ServerUnmutePlayer_Validate, ServerUpdateCamera_Implementation
    //   ServerUpdateCamera_Validate, ServerVerifyViewTarget_Implementation, ServerVerifyViewTarget_Validate
    //   ServerViewNextPlayer_Implementation, ServerViewNextPlayer_Validate
    //   ServerViewPrevPlayer_Implementation, ServerViewPrevPlayer_Validate, ServerViewSelf_Implementation
    //   ServerViewSelf_Validate, SetCameraMode, SetCinematicMode, SetDisableHaptics, SetInputMode, SetName
    //   SetPause, SetPlayer, SetSpawnLocation, SetSpectatorPawn, SetViewTarget, SetViewTargetWithBlend
    //   SetVirtualJoystickVisibility, SetupInactiveStateInputComponent, SetupInputComponent
    //   ShouldKeepCurrentPawnUponSpectating, ShouldShowMouseCursor, SmoothTargetViewRotation
    //   SpawnDefaultHUD, SpawnPlayerCameraManager, SpawnSpectatorPawn, StartFire, StartSpectatingOnly
    //   SwitchLevel, ToggleSpeaking, UnFreeze, UpdateCameraManager, UpdateForceFeedback, UpdateHiddenActors
    //   UpdateHiddenComponents, UpdatePing, UpdateRotation, UpdateStateInputComponents, ViewAPlayer
};
