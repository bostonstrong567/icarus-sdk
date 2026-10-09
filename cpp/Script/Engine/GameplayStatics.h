// /Script/Engine.GameplayStatics
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h

UCLASS()
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void ActivateReverbEffect(UObject* WorldContextObject, UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void AnnounceAccessibleString(FString AnnouncementString);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static float ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static float ApplyPointDamage(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);  // parameters 0xBC
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static bool ApplyRadialDamage(UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);  // parameters 0x4B
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static bool ApplyRadialDamageWithFalloff(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);  // parameters 0x52
    UFUNCTION(BlueprintCallable) static bool AreAnyListenersWithinRange(UObject* WorldContextObject, const FVector& Location, float MaximumRange);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool AreSubtitlesEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static AActor* BeginDeferredActorSpawnFromClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static AActor* BeginSpawningActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, const FTransform& SpawnTransform, bool bNoCollisionFail);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static AActor* BeginSpawningActorFromClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, bool bNoCollisionFail, AActor* Owner);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static bool BlueprintSuggestProjectileVelocity(UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);  // parameters 0x3F
    UFUNCTION(BlueprintCallable) static bool Blueprint_PredictProjectilePath_Advanced(UObject* WorldContextObject, const FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult);  // parameters 0x121
    UFUNCTION(BlueprintCallable) static bool Blueprint_PredictProjectilePath_ByObjectType(UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);  // parameters 0x10D
    UFUNCTION(BlueprintCallable) static bool Blueprint_PredictProjectilePath_ByTraceChannel(UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);  // parameters 0xF5
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakHitResult(const FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial*& PhysMat, AActor*& HitActor, UPrimitiveComponent*& HitComponent, FName& HitBoneName, int32& HitItem, int32& ElementIndex, int32& FaceIndex, FVector& TraceStart, FVector& TraceEnd);  // parameters 0x10C
    UFUNCTION(BlueprintCallable) static void CancelAsyncLoading();
    UFUNCTION(BlueprintCallable) static void ClearSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float FadeOutTime);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void ClearSoundMixModifiers(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static APlayerController* CreatePlayer(UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static USaveGame* CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static UAudioComponent* CreateSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void DeactivateReverbEffect(UObject* WorldContextObject, FName TagName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool DeleteGameInSlot(FString SlotName, int32 UserIndex);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DeprojectScreenToWorld(APlayerController* Player, const FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static bool DoesSaveGameExist(FString SlotName, int32 UserIndex);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static void EnableLiveStreaming(bool Enable);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindCollisionUV(const FHitResult& Hit, int32 UVChannel, FVector2D& UV);  // parameters 0x95
    UFUNCTION(BlueprintCallable, BlueprintPure) static AActor* FindNearestActor(FVector Origin, const TArray<AActor*>& ActorsToCheck, float& Distance);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static AActor* FinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void FlushLevelStreaming(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetAccurateRealTime(int32& Seconds, float& PartialSeconds);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static FVector GetActorArrayAverageLocation(const TArray<AActor*>& Actors);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void GetActorArrayBounds(const TArray<AActor*>& Actors, bool bOnlyCollidingComponents, FVector& Center, FVector& BoxExtent);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static AActor* GetActorOfClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void GetAllActorsOfClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetAllActorsOfClassWithTag(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Tag, TArray<AActor*>& OutActors);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetAllActorsWithInterface(UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*>& OutActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetAllActorsWithTag(UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetAudioTimeSeconds(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static bool GetClosestListenerLocation(UObject* WorldContextObject, const FVector& Location, float MaximumRange, bool bAllowAttenuationOverride, FVector& ListenerPosition);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static FString GetCurrentLevelName(UObject* WorldContextObject, bool bRemovePrefixString);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UReverbEffect* GetCurrentReverbEffect(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool GetEnableWorldRendering(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static UGameInstance* GetGameInstance(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static AGameModeBase* GetGameMode(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static AGameStateBase* GetGameState(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetGlobalTimeDilation(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetIntOption(FString Options, FString Key, int32 DefaultValue);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetKeyValue(FString Pair, FString& Key, FString& Value);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static int32 GetMaxAudioChannelCount(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSubclassOf<UObject> GetObjectClass(UObject* Object);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetPlatformName();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static APlayerCameraManager* GetPlayerCameraManager(UObject* WorldContextObject, int32 PlayerIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static ACharacter* GetPlayerCharacter(UObject* WorldContextObject, int32 PlayerIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static APlayerController* GetPlayerController(UObject* WorldContextObject, int32 PlayerIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static APlayerController* GetPlayerControllerFromID(UObject* WorldContextObject, int32 ControllerID);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetPlayerControllerID(APlayerController* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static APawn* GetPlayerPawn(UObject* WorldContextObject, int32 PlayerIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetRealTimeSeconds(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static ULevelStreaming* GetStreamingLevel(UObject* WorldContextObject, FName PackageName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static TEnumAsByte<EPhysicalSurface> GetSurfaceType(const FHitResult& Hit);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetTimeSeconds(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetUnpausedTimeSeconds(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix& ViewMatrix, FMatrix& ProjectionMatrix, FMatrix& ViewProjectionMatrix);  // parameters 0x6B0
    UFUNCTION(BlueprintCallable, BlueprintPure) static EMouseCaptureMode GetViewportMouseCaptureMode(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetWorldDeltaSeconds(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntVector GetWorldOriginLocation(UObject* WorldContextObject);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static int32 GrassOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasLaunchOption(FString OptionToCheck);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasOption(FString Options, FString InKey);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsGamePaused(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSplitscreenForceDisabled(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static USaveGame* LoadGameFromSlot(FString SlotName, int32 UserIndex);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void LoadStreamLevel(UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void LoadStreamLevelBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32 HitItem, int32 ElementIndex, int32 FaceIndex, FVector TraceStart, FVector TraceEnd);  // parameters 0x10C
    UFUNCTION(BlueprintCallable) static void OpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString Options);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void OpenLevelBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, bool bAbsolute, FString Options);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ParseOption(FString Options, FString Key);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void PlayDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static void PlayDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void PlaySound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor, bool bIsUISound);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void PlaySoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, AActor* OwningActor);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void PlayWorldCameraShake(UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void PopSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void PrimeAllSoundsInSoundClass(USoundClass* InSoundClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void PrimeSound(USoundBase* InSound);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool ProjectWorldToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);  // parameters 0x1E
    UFUNCTION(BlueprintCallable) static void PushSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RebaseLocalOriginOntoZero(UObject* WorldContextObject, FVector WorldLocation);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RebaseZeroOriginOntoLocal(UObject* WorldContextObject, FVector WorldLocation);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void RemovePlayer(APlayerController* Player, bool bDestroyPawn);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool SaveGameToSlot(USaveGame* SaveGameObject, FString SlotName, int32 UserIndex);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) static void SetBaseSoundMix(UObject* WorldContextObject, USoundMix* InSoundMix);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetEnableWorldRendering(UObject* WorldContextObject, bool bEnable);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetForceDisableSplitscreen(UObject* WorldContextObject, bool bDisable);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool SetGamePaused(UObject* WorldContextObject, bool bPaused);  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetGlobalListenerFocusParameters(UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetGlobalPitchModulation(UObject* WorldContextObject, float PitchModulation, float TimeSec);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetMaxAudioChannelsScaled(UObject* WorldContextObject, float MaxChannelCountScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetPlayerControllerID(APlayerController* Player, int32 ControllerId);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetSoundClassDistanceScale(UObject* WorldContextObject, USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);  // parameters 0x25
    UFUNCTION(BlueprintCallable) static void SetSubtitlesEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetViewportMouseCaptureMode(UObject* WorldContextObject, EMouseCaptureMode MouseCaptureMode);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetWorldOriginLocation(UObject* WorldContextObject, FIntVector NewLocation);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static UDecalComponent* SpawnDecalAtLocation(UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static UDecalComponent* SpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static UAudioComponent* SpawnDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static UAudioComponent* SpawnDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);  // parameters 0x68
    UFUNCTION(BlueprintCallable) static UAudioComponent* SpawnDialogueAttached(UDialogueWave* Dialogue, const FDialogueContext& Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);  // parameters 0x70
    UFUNCTION(BlueprintCallable) static UParticleSystemComponent* SpawnEmitterAtLocation(UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static UParticleSystemComponent* SpawnEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static UForceFeedbackComponent* SpawnForceFeedbackAtLocation(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static UForceFeedbackComponent* SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static UObject* SpawnObject(TSubclassOf<UObject> ObjectClass, UObject* Outer);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static UAudioComponent* SpawnSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static UAudioComponent* SpawnSoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static bool SuggestProjectileVelocity_CustomArc(UObject* WorldContextObject, FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam);  // parameters 0x35
    UFUNCTION(BlueprintCallable) static void UnRetainAllSoundsInSoundClass(USoundClass* InSoundClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void UnloadStreamLevel(UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void UnloadStreamLevelBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);  // parameters 0x49
};
