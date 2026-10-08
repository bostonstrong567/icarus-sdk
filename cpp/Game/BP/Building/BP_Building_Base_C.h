// /Game/BP/Building/BP_Building_Base.BP_Building_Base_C
// Derives from: ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC48, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Base_C : public ABuildingBase, public IAudioOccluderInterface, public IBP_WeatherInteractable_C, public IBP_CaveComponentInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x06E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_AccumulationComponent_C* BPC_AccumulationComponent;  // 0x06E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* WeatherCullingMesh;  // 0x06F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UShelteredModifierComponent* ShelteredModifier;  // 0x06F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0700, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SecondOutsideTestLocation;  // 0x0708, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Stripped_DestructibleMesh;  // 0x0710, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Main_DestructibleMesh;  // 0x0718, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Stripped_BuildingMesh;  // 0x0720, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Main_BuildingShadowMesh;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* FireEffects;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* PlacementArrow;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PlacementHelpers;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* rotdebug;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* DebugArrows;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* Debug;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Main_BuildingMesh;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box11;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box01;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box10;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box00;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CollisionTesting;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Center;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GridSize;  // 0x07B0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_Grid_Base_C* ParentGrid;  // 0x07B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Health;  // 0x07C0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float AnchoredStability;  // 0x07C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Dirtied;  // 0x07C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> CheckedBuildingsCache;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* debugMatCache;  // 0x07E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* MeshCache;  // 0x07E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool debugging;  // 0x07F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SoftStability;  // 0x07F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CrackTimer;  // 0x07F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CrackUpdateTime;  // 0x0800, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVectorSpringState ShakeSpring;  // 0x0804, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ShakeTarget;  // 0x081C, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float LastHardStabilityCheck;  // 0x0828, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> CachedAffectedBuildings;  // 0x0830, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MagicAnchor;  // 0x0840, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CollapseTimer;  // 0x0848, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FRotator GridSpaceRotation;  // 0x0850, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedRotateCentersUpToHitNormal;  // 0x085C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> RemoteAnchorStabilityBuilding;  // 0x0860, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MeshStartingRelitiveLocation;  // 0x0870, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BlockLikePlacement;  // 0x087C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StraightTracePlacementRange;  // 0x0880, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForwardThenDownTraceRange;  // 0x0884, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicCrackMatInst;  // 0x0888, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CrackAmountCurve;  // 0x0890, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle VeryUnstableEffectsTime;  // 0x0898, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* DestructibleMesh;  // 0x08A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString debugAnchorStabs;  // 0x08A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastPushAnchorStability;  // 0x08B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DirtyTickTimer;  // 0x08C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* DestructibleOcclusionCurve;  // 0x08C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TempStability;  // 0x08D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DebugUnclampedHardStability;  // 0x08D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Destroyed;  // 0x08D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_Weight_C*> Weights;  // 0x08E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredCrackLevel;  // 0x08F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentCrackLevel;  // 0x08F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* DefaultSlot0Material;  // 0x08F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> InstancedMainMeshMaterials;  // 0x0900, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitProcessingRadiusThreshold;  // 0x0910, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ClientsideGhost;  // 0x0914, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowPlacementHelpers;  // 0x0915, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance StressDamageAudioEventInstance;  // 0x0918, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StabilityAudioEnabled;  // 0x0920, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BuildingGridFootprint;  // 0x0924, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClampHitNormalToUpOrDown;  // 0x0930, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator CachedCenterWorldRotation;  // 0x0934, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OnFire;  // 0x0940, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool GhostBlockedPlacement;  // 0x0941, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GhostActorViewDistance;  // 0x0944, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OutsideTestPushoutAmount;  // 0x0948, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ReceivingWindDamage;  // 0x0954, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle WindDamageTimer;  // 0x0958, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle WindParticleSystemSlowTimer;  // 0x0960, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseDamageFromWind;  // 0x0968, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<DestructionPoints> DestructibleDamagedPoints;  // 0x0970, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WindDamageProcessedIndex;  // 0x0980, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool FullyStripped;  // 0x0984, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* StrippedDestructibleMesh;  // 0x0988, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* StrippedStaticMesh;  // 0x0990, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionDamageImpulseScalar;  // 0x0998, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Stripping;  // 0x099C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildableAudioData AudioData;  // 0x09A0, size 0x188
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance WindDamageAudioEventInstance;  // 0x0B28, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D DamageSoundCooldownRange;  // 0x0B30, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D DestructibleDamageSoundCooldownRange;  // 0x0B38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageSoundCooldownEndTime;  // 0x0B40, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DestructibleDamageSoundCooldownEndTime;  // 0x0B44, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Main_BuildingStaticMesh;  // 0x0B48, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldOptionallyRotateCenterUptoInpactNormal;  // 0x0B50, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector NewGridPlacementOffset;  // 0x0B54, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Main_BuildingShadowGeoMesh;  // 0x0B60, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_BuildingWindDamage_C* WindDamageWeatherAudio;  // 0x0B68, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavArea> BuildingNavAreaClass;  // 0x0B70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SupportedByGround;  // 0x0B78, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool FirstStabilityCalced;  // 0x0B79, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SoftHeightLimit;  // 0x0B7C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 DistanceToGround;  // 0x0B80, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle WeightUnstableTimer;  // 0x0B88, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle WeightUnstableActiveDestruction;  // 0x0B90, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CrackSizeDivisor;  // 0x0B98, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBuildingOpenableState> OpenableState;  // 0x0B9C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOpenableStateChanged OpenableStateChanged;  // 0x0BA0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ManualWindDamagePeriod;  // 0x0BB0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentWindDamageTimerTime;  // 0x0BB4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* StormToBuildingInteractionCurve;  // 0x0BB8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseWindDamagePointRadius;  // 0x0BC0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseWindDamagePointImpusle;  // 0x0BC4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RecentlyRepaired;  // 0x0BC8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAsyncResettingDM;  // 0x0BC9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* HealthToDestructionPointCount;  // 0x0BD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* HealthToDestructionImpulseStrength;  // 0x0BD8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EffectiveDestructionPointCount;  // 0x0BE0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SnowCleared;  // 0x0BE8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ReceivingUnzip;  // 0x0BF0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DelayedDirtyTimer;  // 0x0BF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FromDatabaseHealthPercentage;  // 0x0C00, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SnowConstant;  // 0x0C04, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasAreaLoadedOnce;  // 0x0C08, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInCave;  // 0x0C09, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LastIsOutsideResult;  // 0x0C0A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastIsOutsideResponseTime;  // 0x0C0C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IsOutsideCacheTime;  // 0x0C10, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TaggedDamageTimer;  // 0x0C18, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* RVTCullingMesh;  // 0x0C20, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildup_C* EnvironmentalBuildup;  // 0x0C28, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AWeatherController* CachedWeatherController;  // 0x0C30, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle UnstableUpdateTimer;  // 0x0C38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SandConstant;  // 0x0C40, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AshConstant;  // 0x0C44, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddWeightComponentInfluence(UShapeComponent* Shape, UWeightComponent* Weight, bool bSpreadToNeighbours);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void AddWindDamageWeatherAudioComponent();
    UFUNCTION(BlueprintCallable) void AppendUniqueBuildingArray(TArray<ABP_Building_Base_C*>& Array_1, TArray<ABP_Building_Base_C*>& Array_2, TArray<ABP_Building_Base_C*>& Array1UniquelyAddedTo2);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ApplyDotsToFootprint(FVector Dots, FVector& SelectedRelativeFootprint);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ApplyShadowSettings();
    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Async_mat_change();  // named "Async mat change"
    UFUNCTION(BlueprintCallable) void AsyncMainDMReset();
    UFUNCTION(BlueprintCallable) void AsyncStrippedMeshSwap();
    UFUNCTION(BlueprintCallable) void AttemptToApplyDynamicMaterialsOnDestructibleMesh();
    UFUNCTION(BlueprintCallable) void AttemptToResetMaterialsOnDestructibleMesh();
    UFUNCTION(BlueprintCallable) void BlockLikePlacementTranslation(FTransform GridSpaceLocWithoutRot, FRotator GridSpaceRot, FTransform& ShiftedTransformwithRot);  // parameters 0x70
    UFUNCTION() void BndEvt__ActorState_K2Node_ComponentBoundEvent_0_OnDamagedSignature__DelegateSignature(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void BuildingHitToGridRounded(const FHitResult& InHit, TSubclassOf<ABP_Building_Base_C> ClassToBuild, int32 RotationalOffsetState, ACharacter* PlayerPerformingTrace, FTransform& OutWorldSpaceOnGrid, TEnumAsByte<RotationalDirections>& BuildingHitRelativeRotation, TEnumAsByte<RotationalDirections>& HitGridRelativeRotation);  // parameters 0xD2
    UFUNCTION(BlueprintCallable, BlueprintPure) void BuildingStabilityColorCalc(FLinearColor& StabilityColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Calculate_Stability_State_Implementation();  // named "Calculate Stability State Implementation"
    UFUNCTION(BlueprintCallable, BlueprintPure) void CalculateBaseWindDamagePeriod(float& DamagePeriod);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float CalculateEffectiveWindDamagePeriod();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CalculateStabilityState();
    UFUNCTION(BlueprintCallable) void CheckWindDamagePacing(bool& NewPacing);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Clamp_Hit_Normal_To_Centers_Main_Directions(FVector WorldSpaceVector, FVector& RoundedWorldSpaceVector);  // parameters 0x18, named "Clamp Hit Normal To Centers Main Directions"
    UFUNCTION(BlueprintCallable) void Clamp_Hit_Normal_to_Center_Up_or_Down(FVector Normal, FVector& Clamped_Normal);  // parameters 0x18, named "Clamp Hit Normal to Center Up or Down"
    UFUNCTION(BlueprintCallable) void CleanupIndirectWeight();
    UFUNCTION(BlueprintCallable) void CleanupWeightTimers();
    UFUNCTION(BlueprintCallable) void ClientAndServer_Outline();  // named "ClientAndServer Outline"
    UFUNCTION(BlueprintCallable) void Collapse();
    UFUNCTION(BlueprintCallable, BlueprintPure) void CollapseTimerBasedOffLastHardStability(float& NewParam);  // parameters 0x4
    UFUNCTION(BlueprintCallable) TEnumAsByte<RotationalDirections> CompareRotations(FRotator Compare, FRotator CompareAgainst, FVector& Dots);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void ConsiderHidingGhostActor();
    UFUNCTION(BlueprintCallable) void ConsumeHit_Collision(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void CopyBuildingSkinToDestructibleMesh();
    UFUNCTION(BlueprintCallable) void Cracks();
    UFUNCTION(BlueprintCallable) void DebugApplyShadowSettings();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void DebugStabilityMulti(float hardstabilityCount, float HardStabValue, int32 RemoteAnchorBuildings, float AnchorStab, FString Debug, float UnclampedHardStability);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void DebugViewSnowMesh();
    UFUNCTION(BlueprintCallable) void DecideShifting(FRotator RotationToTest_world_, FRotator RotationTestingAgainst_gridspace_, FTransform GridSpaceLOCHitPlaneRot, TSubclassOf<ABP_Building_Base_C> Building_Class, float DistanceBetweenHitAndCenter, FVector RawHitNormal, ACharacter* Player, FTransform& GridSpaceLOCWithGridSpaceRot, TEnumAsByte<RotationalDirections>& RelativeRotationEnum, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtraDelta);  // parameters 0xE0
    UFUNCTION(BlueprintCallable) void DelayedAsyncProccessDestructibleDamage();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Destruction_effects();  // named "Destruction effects"
    UFUNCTION(BlueprintCallable) void DirtyShelter();
    UFUNCTION(BlueprintCallable, BlueprintPure) float DirtyTickBackOffTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DisableDFAOOnMesh();
    UFUNCTION(BlueprintCallable) void DoBuildingOutsideCheckTrace(FVector StartPosition, bool& TraceHit);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void DoTaggedDamage();
    UFUNCTION(BlueprintCallable, BlueprintPure) void DoesBuildingArrayContainBuildingArray(TArray<ABP_Building_Base_C*>& ContainingArray, TArray<ABP_Building_Base_C*>& InnerArray, bool& ContainedInnerArray);  // parameters 0x21
    UFUNCTION() void ExecuteUbergraph_BP_Building_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_Building_Piece_Blueprint(FBuildingPiecesRowHandle Piece, TSoftClassPtr<ABuildingBase>& Blueprint);  // parameters 0x40, named "Get Building Piece Blueprint"
    UFUNCTION(BlueprintCallable) void GetBlockingBypass(TSubclassOf<ABP_Building_Base_C> BuildingClass, TArray<FVectorPair>& BlockingPreRotate, FTransform GridSpaceTransform, TArray<FVectorPair>& BypassBlocking);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void GetBlockingLines(TArray<FVectorPair>& BlockingLines);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) USceneComponent* GetCenterComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetCurrentWeatherAction(UIcarusWeatherAction*& CurrentWeatherAction);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UDestructibleComponent* GetDestructibleBuildingMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMeshComponent* GetMainBuildingMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMesh* GetMainBuildingStaticMeshAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetOcclusionValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) ABuildingGridBase* GetParentGrid() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetSnowAmount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMeshComponent* GetStrippedBuildingMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMesh* GetStrippedBuildingStaticMeshAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UDestructibleComponent* GetStrippedDestructibleMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetVariation(bool& IsValid, FBuildingVariation& VariationData, int32& VariationIndex);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void GetWeatherController(AWeatherController*& Output_Get);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GhostActorSlowTick();
    UFUNCTION(BlueprintCallable) void HealthToDestruction();
    UFUNCTION(BlueprintCallable) void IndirectWeightChildDestroyed(ABuildingBase* Building, EBuildingDestroyReason DestroyReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void InitAnchorStability();
    UFUNCTION(BlueprintCallable) void InitShelterCaptureForWeather();
    UFUNCTION(BlueprintCallable) void InstantAsyncProcessDestructibleDamage();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsBuildingDestroyed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsBuildingOutside();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsBuildingSalted();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsFullyStripped(bool& FullStripped);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsLandscapeLoaded();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsOnFire(bool& Result);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsReceivingWindDamage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlaySnowClearedEffects();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ShowPlacementHelpers(ACharacter* ForPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Manual_BeginPlay();
    UFUNCTION(BlueprintCallable) void Manual_Construction(ABP_Grid_Base_C* ParentGrid, FVector GridLocation);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void MarkDirty_Old();
    UFUNCTION(BlueprintCallable, NetMulticast) void MultiOnPlaced(AIcarusPlayerCharacter* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast) void MultiOnRepaired(bool RemoveScorch);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_ClientsideGhost();
    UFUNCTION(BlueprintCallable) void OnRep_DestructibleDamagedPoints();
    UFUNCTION(BlueprintCallable) void OnRep_FullyStripped();
    UFUNCTION(BlueprintCallable) void OnRep_GhostBlockedPlacement();
    UFUNCTION(BlueprintCallable) void OnRep_ParentGrid();
    UFUNCTION(BlueprintCallable) void OnRep_ReceivingUnzip();
    UFUNCTION(BlueprintCallable) void OnRep_ReceivingWindDamage();
    UFUNCTION(BlueprintCallable) void OnRep_Stripping();
    UFUNCTION(BlueprintCallable) void OnTerrainAnchorUpdated();
    UFUNCTION(BlueprintCallable) void OpenableStateChanged__DelegateSignature(TEnumAsByte<EBuildingOpenableState> NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void OptionallyRotateCenterUpToInpactNormal(FVector HitNormal, FRotator& CenterWorldRotation, FRotator& ZRotatedDifference, bool& ImpactWasAlreadyRotated);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void OverWeightCheck();
    UFUNCTION(BlueprintCallable) void OverweightDestructionTick();
    UFUNCTION(BlueprintCallable) void PickNewShakeTarget();
    UFUNCTION(BlueprintCallable, NetMulticast) void PlacementHelperVisualMulticast(const TArray<UPrimitiveComponent*>& Component, UMaterialInterface* NewMaterial);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PlayBuildingPlacedSound(AIcarusPlayerCharacter* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayDestructionAudio(float SnowAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayFullyStrippedSound();
    UFUNCTION(BlueprintCallable) void PlayRepairedSound();
    UFUNCTION(BlueprintCallable) void PlaySnowClearedSound();
    UFUNCTION(BlueprintCallable) void PlayerClearBuildup(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ProcessWindDamageArray();
    UFUNCTION(BlueprintCallable) void PushAnchorIntoHardStability();
    UFUNCTION(BlueprintCallable) void PushHardStabilityAsync();
    UFUNCTION(BlueprintCallable) void QueueTaggedDamage(float Cycle, EIcarusDamageType DamageType, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RaiseTheCurtain();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDestroyed();
    UFUNCTION(BlueprintCallable) void ReceiveDirectWeight(UShapeComponent* Shape, UWeightComponent* Weight, bool SpreadToNeighbors);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReceiveHardStability(ABP_Building_Base_C* FromBuilding, float Stability);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void RedistributeDirectWeight();
    UFUNCTION(BlueprintCallable) void RegisterWithWeatherController();
    UFUNCTION(BlueprintCallable) void ReinitAnchorStability();
    UFUNCTION(BlueprintCallable) void RemoveDirectWeight(UShapeComponent* Shape, UWeightComponent* Weight);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveHardStability(ABP_Building_Base_C* RemovedBuilding);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveInvalidHardStabilityRefs();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveWeightComponentInfluence(UShapeComponent* Shape, UWeightComponent* Weight);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveWindDamageWeatherAudioComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RepairObject(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RepushAllInRangeAnchors(bool& FoundAnAnchor);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetStabilityAudio();
    UFUNCTION(BlueprintCallable) void SaltBuilding(AController* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ServerFullyStripBuilding();
    UFUNCTION(BlueprintCallable) void ServerRepair(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ServerStartWindDamage(float ManualPeriodOverride);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ServerStopWindDamage();
    UFUNCTION(BlueprintCallable) void SetCaveState(bool IsInCave, AActor* CaveActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetHealthByPercentage(int32 Percentage);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIsInCave(bool InCave);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOpenableState(TEnumAsByte<EBuildingOpenableState> NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlacementHelpersVisibility(bool bNewVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSupportedByGround(bool SupportedByGround);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUnzipAudioActive(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShadowSettings_changed(bool Value);  // parameters 0x1, named "ShadowSettings changed"
    UFUNCTION(BlueprintCallable) void ShouldBackwardShift(TEnumAsByte<RotationalDirections> Direction, bool& Shift);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShouldDownShift(TEnumAsByte<RotationalDirections> Direction, bool& Shift);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShouldForwardShift(TEnumAsByte<RotationalDirections> Direction, bool& Shift);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShouldLeftShift(TEnumAsByte<RotationalDirections> Direction, bool& Shift);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShouldRightShift(TEnumAsByte<RotationalDirections> Direction, bool& Shift);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShouldRotate(TEnumAsByte<RotationalDirections> Direction, FTransform GridSpaceTrans, TSubclassOf<ABP_Building_Base_C> NewBuilding, float HitDistanceFromCenter, FVector Dots, FRotator WorldRotToTest, FRotator GridspaceRotTestAgainst, FVector RawHitNormal, ACharacter* Player, FTransform& Shifted, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtra);  // parameters 0x100
    UFUNCTION(BlueprintCallable) void ShouldUpShift(TEnumAsByte<RotationalDirections> Direction, bool& Shift);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShowPlacementHelpersWithReset(float ResetDelay);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stable();
    UFUNCTION(BlueprintCallable, NetMulticast) void StableEffects();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void StartDestruction(AIcarusPlayerController* TriggeringPlayer, EBuildingDestroyReason DestroyReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void StartWindDamageAudio();
    UFUNCTION(BlueprintCallable) void StopAllAudio();
    UFUNCTION(BlueprintCallable) void StopWindDamageAudio();
    UFUNCTION(BlueprintCallable) void StopWindDamageTimers();
    UFUNCTION(BlueprintCallable) void TempStabilityExpired();
    UFUNCTION(BlueprintCallable) void TraceForCave();
    UFUNCTION(BlueprintCallable) void TransitionToMainDestructibleMesh();
    UFUNCTION(BlueprintCallable) void TransitionToMainMesh();
    UFUNCTION(BlueprintCallable) void TransitionToStrippedMesh();
    UFUNCTION(BlueprintCallable) void TransitionedToDM();
    UFUNCTION(BlueprintCallable) void TransitionedToMainMesh();
    UFUNCTION(BlueprintCallable) void TransitionedToStrippedCheck();
    UFUNCTION(BlueprintCallable) void TryEnterStrippableState();
    UFUNCTION(BlueprintCallable) void TryPlayDamageSound(int32 DamageAmount, FDamageEvent DamageEvent, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void TryPlayDestructibleDamageSound(FVector Location, float Impulse);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TrySpawnRVTBlocker();
    UFUNCTION(BlueprintCallable) void Unstable();
    UFUNCTION(BlueprintCallable, NetMulticast) void UnstableEffects(bool VeryUnstable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateStabilityAudio(bool IsVeryUnstable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateStabilityAudioVeryUnstable(float TimerLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateWindDamageTimer(float NewTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void VeryUnstable();
    UFUNCTION(BlueprintCallable, NetMulticast) void VeryUnstableEffects(float TimerLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void VeryUnstableEffectsFinished();
    UFUNCTION(BlueprintCallable) void WeightInjectedUnstable();
    UFUNCTION(BlueprintCallable) void WeightInjectedVeryUnstable();
    UFUNCTION(BlueprintCallable) void WeightUnstable();
    UFUNCTION(BlueprintCallable) void WindDamageCosmetics();
    UFUNCTION(BlueprintCallable) void WindDamageGeneration();
    UFUNCTION(BlueprintCallable) void WindDamageTick();
    UFUNCTION(BlueprintCallable) void debug_color();  // named "debug color"
    UFUNCTION(BlueprintCallable) void debugdestruction();
};
