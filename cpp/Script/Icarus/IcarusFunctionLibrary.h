// /Script/Icarus.IcarusFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusFunctionLibrary.h

UCLASS(MinimalAPI)
class UIcarusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static int32 AddFireModifierState(AActor* Parent, AActor* Causer, AController* Instigator);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static int32 AddModifierState(AActor* Parent, FModifier InModifier, AActor* Causer, AController* Instigator, int32 Effectiveness);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void AddTraitComponent(AActor* Owner, TSubclassOf<UTraitComponent> TraitComponentClass, FRowHandle TraitData, UTraitComponent*& OutComponent);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FColor BiomeToColor(const FBiomesRowHandle& BiomesRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void CalculateComfortValues(AIcarusPlayerCharacter* PlayerCharacter, AIcarusActor* BedActor, int32 ComfortLevel, int32& EffectivenessValue, int32& DurationValue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool CanHit(AActor* Source, AActor* Target);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void CanHitWithSuccessType(AActor* Source, AActor* Target, ECanHitResult& Result, FValidHitTypesRowHandle& Out_ValidHitType);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceMultiRotated(UObject* WorldContextObject, FVector Start, FVector End, const FRotator& Orientation, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x89
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceSingleRotated(UObject* WorldContextObject, FVector Start, FVector End, const FRotator& Orientation, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xFD
    UFUNCTION(BlueprintCallable) static void CastToIcarusActorArray(const TArray<AActor*>& InActors, TArray<AIcarusActor*>& OutActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool CheckDeathEvent(AActor* Target, AActor* Source, FExperienceData Data);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static FBiomesRowHandle ColorToBiome(const FColor& Color);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FDateTime ConvertToDateTime(int32 EpochTime);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static int32 ConvertToEpoch(FDateTime Time);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DoesBoneExist(USkeletalMesh* Mesh, FName BoneName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool DoesFoliageTypeHaveValidCollisionSetup(UFoliageType_InstancedStaticMesh* InFoliageTypeISM, FString& FailureReason);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName EnumToRowName(uint8 EnumValue, UEnum* InEnum);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<AActor*> FilterActorsByBiome(const TArray<AActor*>& Actors, FBiomesRowHandle Biome);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static bool FindModifierState(AActor* Parent, FModifierStatesRowHandle InModifierFilter, UModifierStateComponent*& FoundComponent);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FindPositionFromDistanceCurve(UAnimSequenceBase* InAnimSequence, FName AnimationCurveName, float Distance);  // parameters 0x18
    UFUNCTION() static void FixModifierActivation(AActor* Parent, const FModifierStatesRowHandle& RowHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void FlushLandscapeProxy(ALandscapeProxy* Proxy);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static UAuraManagerComponent* GetAuraManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void GetBackendProxyComponent(UObject* WorldContextObject, int32 PlayerIndex, UBackendProxyComponent*& BackendProxyComponent, bool& bSuccess);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static FTransform GetBoneTransform(USkeletalMesh* Mesh, FName BoneName);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static UPrimitiveComponent* GetConstrainedComponent(UPhysicsConstraintComponent* PhysicsConstraint, TEnumAsByte<EConstraintFrame> Frame);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static EMissionDifficulty GetCurrentProspectDifficulty(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetCurrentProspectDifficultySetup(UObject* WorldContextObject, FDifficultySetup& DifficultySetup);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetCustomPrimitiveDataFloat(UPrimitiveComponent* Primitive, int32 DataIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetCustomPrimitiveDataFloatISM(UInstancedStaticMeshComponent* ISM, int32 InstanceIndex, int32 DataIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D GetCustomPrimitiveDataVector2(UPrimitiveComponent* Primitive, int32 DataIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetCustomPrimitiveDataVector3(UPrimitiveComponent* Primitive, int32 DataIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 GetCustomPrimitiveDataVector4(UPrimitiveComponent* Primitive, int32 DataIndex);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static UDialogueSystem* GetDialogueSystem(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static ADisasterController* GetDisasterController(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static EDynamicQuestDifficulty GetDynamicQuestDifficulty(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static int32 GetExperienceGrantedFromEvent(AActor* Target, const FExperienceEventsRowHandle& Event, AActor* Source);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static int32 GetExperienceGrantedFromRecipe(const FProcessorRecipe& Recipe, const FRecipeSet& RecipeSet);  // parameters 0x384
    UFUNCTION(BlueprintCallable) static bool GetGameplayTagContainer(UObject* InAsset, FGameplayTagContainer& OutContainer);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static AIcarusGameStateSpace* GetIcarusGameStateSpace(UObject* WorldContextObject, bool& bValid);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static AIcarusGameStateSurvival* GetIcarusGameStateSurvival(UObject* WorldContextObject, bool& bValid);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static AIcarusPlayerCharacter* GetIcarusPlayerCharacter(UObject* WorldContextObject, int32 PlayerIndex, EValid& IsValid);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static AIcarusPlayerController* GetIcarusPlayerController(UObject* WorldContextObject, int32 PlayerIndex, EValid& IsValid);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static AInventoryContainerManager* GetInventoryContainerManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool GetItemOwnerInfo(UObject* WorldContextObject, const FItemData& Item, FPlayerHistoryEntry& OwningPlayerInfo);  // parameters 0x221
    UFUNCTION(BlueprintCallable) static int32 GetLevelIndexAtLocation(UObject* WorldContextObject, const FVector& Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static int32 GetLevelTimeElapsedSec(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetLinearDriveParams(UPhysicsConstraintComponent* PhysicsConstraint, float& PositionStrength, float& VelocityStrength);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool GetMapVersions(UObject* WorldContextObject, const TSoftObjectPtr<UWorld>& LevelAsset, int32& MapVersion, int32& GeneratedVersion);  // parameters 0x39
    UFUNCTION(BlueprintCallable) static UModifierStateComponent* GetModifierStateByUID(AActor* Parent, int32 UID);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static UAnimMetaData* GetMontageSectionMetaDataByClass(TSubclassOf<UAnimMetaData> Class, UAnimMontage* Montage, bool& Success, FName MontageSection);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FName> GetMontageSections(UAnimMontage* Montage);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static int32 GetNearestTileIndex(UObject* WorldContextObject, const FVector& Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetObjectInteraction(AActor* Source, AActor* Target, FValidInteractQueriesRowHandle& RowHandle, bool& bValidInteract);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static FWeatherBiomeGroupsRowHandle GetParentBiomeGroup(const FBiomesRowHandle& SearchBiome);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetPlayerCharacterState(UObject* WorldContextObject, int32 PlayerIndex, UPlayerCharacterState*& PlayerCharacterState, bool& bSuccess);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static APlayerHistoryTracker* GetPlayerHistoryTracker(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static AQuestManager* GetQuestManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static ARadiationManager* GetRadiationManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static int32 GetRemainingProspectTime(int32 ElapsedTimeSeconds, FProspectListRowHandle Prospect);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FName GetRootBoneName(USkeletalMesh* Mesh);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static int32 GetSecondsPerGameDay(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static TArray<FStaticMeshCapsuleCollider> GetStaticMeshCapsuleGeo(UStaticMesh* StaticMesh);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FStaticMeshCollisionGeo GetStaticMeshCollisionGeo(UStaticMesh* StaticMesh);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static UStaticMesh* GetStaticMeshFromFoliageISM(UObject* FoliageType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FStaticMeshSphereCollider> GetStaticMeshSphereGeo(UStaticMesh* StaticMesh);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static ULevelStreamingDynamic* GetStreamedLevelAtLocation(UObject* WorldContextObject, const FVector& Location);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool GetTerrainData(UObject* WorldContextObject, FTerrainsRowHandle& TerrainData);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static FString GetVoxelCacheFilePath(TSubclassOf<AVoxelResource> VoxelBlueprint);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static AWeatherController* GetWeatherController(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static AWeatherForecastManager* GetWeatherForecastManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static UWeatherManagerComponent* GetWeatherManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static AWorldBossManager* GetWorldBossManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool GetWorldData(UObject* WorldContextObject, FWorldDataRowHandle& WorldData);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static AWorldSettings* GetWorldSettings(UObject* worldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static AWorldTalentManager* GetWorldTalentManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool GrantExactExperienceToActor(AActor* Target, const FExperienceEventsRowHandle& Event, int32 ExperienceGranted, AActor* Source);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool GrantExperienceToActor(AActor* Target, FExperienceEventsRowHandle Event, AActor* Source);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static bool GrantExperienceToActorWithMultiplier(AActor* Target, const FExperienceEventsRowHandle& Event, float Multiplier, AActor* Source);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool GrantSharedExperience(AActor* Source, int32 Experience);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static bool HasModifierState(AActor* Parent, FModifierStatesRowHandle InModifierFilter);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsConstraining(UPhysicsConstraintComponent* PhysicsConstraint);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsEditorOnlyActor(AActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool IsFLODMesh(UStaticMeshComponent* Mesh);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool IsLocationLoaded(UObject* WorldContextObject, const FVector& Location, TSoftObjectPtr<UWorld>& Heightmap);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsMouseNavigation(const FFocusEvent& InFocusEvent);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsUsingControllerInput();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static FQuat MakeQuatFromAxisAngle(const FVector& Axis, float AngleRadians);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool RemoveModifierState(AActor* Parent, FModifierStatesRowHandle InModifierFilter, int32 UID);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 RowHandleToEnum(FRowHandle InRowHandle, UEnum* InEnum);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static FBiomesRowHandle SampleBiomeAtLocation(UObject* WorldContext, const FVector& Location);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static FColor SampleBiomeColorAtLocation(UObject* WorldContext, const FVector& Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FColor SampleBoundsColorAtLocation(UObject* WorldContext, const FVector& Location, bool bIncludeTerrainDataMask);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static int32 SampleEnvironmentalTemperature(UObject* WorldContextObject, const FBoxSphereBounds& Bounds, AActor* Caller, FBiomesRowHandle Biome, bool bExcludeFire);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static FColor SampleHeatmapWithLocation(UGameplayTexture* Texture, UObject* WorldContext, const FVector& Location);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FColor SampleHeatmapWithUV(UGameplayTexture* Texture, const FVector2D& UV);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static bool SampleLocationOutOfBounds(UObject* WorldContext, const FVector& Location, bool bIncludeTerrainDataMask);  // parameters 0x16
    UFUNCTION(BlueprintCallable) static int32 SampleTemperatureMapWithLocation(UGameplayTexture* Texture, UObject* WorldContext, const FVector& Location, const FVector2D& Scalar);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static int32 SampleTerrainTemperatureColorAtLocation(UObject* WorldContext, const FVector& Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool SetContactShadowsForComponent(UPrimitiveComponent* Component, bool bContactShadowsEnabled);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static bool SetFarShadowsForComponent(UPrimitiveComponent* Component, bool bFarShadowsEnabled);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static bool SetGameplayTagContainer(UObject* InAsset, const FGameplayTagContainer& InContainer);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void SetItemOwnerInfo(UObject* WorldContextObject, FItemData& Item, AIcarusPlayerController* NewOwner);  // parameters 0x200
    UFUNCTION(BlueprintCallable) static void SetLandscapeCollisionProfile(ALandscapeProxy* Landscape, FName ProfileName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool SetModifierAuraEffectiveness(AActor* Parent, int32 UID, FStatsEnum Stat);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void SetPrimitveNeverDistanceCull(UPrimitiveComponent* PrimitveComponent, bool NewState);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetWidgetNavigation(bool AllowAnalog, bool AllowKey, bool AllowTab);  // parameters 0x3
    UFUNCTION(BlueprintCallable) static int32 TriggerAfflictionChance(AActor* Parent, FAfflictionChanceRowHandle Affliction, AActor* Causer, AController* Instigator);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static bool TriggerExperienceEvent(AActor* Target, EExperienceSource Type, AActor* Source);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static FVector2D WorldLocationToHeatmapUV(UObject* WorldContext, const FVector& Location);  // parameters 0x1C
};
