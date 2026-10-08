// /Script/Icarus.IcarusPlayerCharacterSurvival
// Derives from: AIcarusPlayerCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD80, declared in Icarus/Source/Icarus/Characters/IcarusPlayerCharacterSurvival.h

UCLASS(Config=Game)
class AIcarusPlayerCharacterSurvival : public AIcarusPlayerCharacter
{
public:
    UPROPERTY(BlueprintReadOnly) bool bIsHoldingJump;  // 0x0B90, size 0x1
    UPROPERTY() bool bWantsAutoRun;  // 0x0B91, size 0x1
    UPROPERTY() bool bHasMovementInputBeenReleased;  // 0x0B92, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UIcarusStatContainer*> NearbyComfortAffectingActors;  // 0x0B98, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedComfortLevel;  // 0x0BA8, size 0x4
    UPROPERTY(EditAnywhere) bool bClientFrozenMovement;  // 0x0C10, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) bool bServerFrozenMovement;  // 0x0C11, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bActualFrozenMovement;  // 0x0C12, size 0x1
    UPROPERTY(EditAnywhere) UScopedViewportBlocker* FrozenMovementViewportBlocker;  // 0x0C18, size 0x8
    UPROPERTY() bool bIsSpectateTarget;  // 0x0C20, size 0x1
    UPROPERTY(Instanced) UInstancedLevelLoadBlocker* InstancedLevelLoadBlocker;  // 0x0C28, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float base_turn_rate;  // 0x0C30, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float base_look_up_rate;  // 0x0C34, size 0x4
    UPROPERTY(Replicated, BlueprintReadOnly) float PlayerPitch;  // 0x0C38, size 0x4
    UPROPERTY(Replicated, BlueprintReadOnly) float PlayerYaw;  // 0x0C3C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* EnvirosuitInventory;  // 0x0C40, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* BackpackInventory;  // 0x0C48, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* QuickbarInventory;  // 0x0C50, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* UpgradeInventory;  // 0x0C58, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* VisionInventory;  // 0x0C60, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 FocusedQuickbarSlot;  // 0x0C68, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSmoothMouseInput;  // 0x0C6C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputSmoothSpeed;  // 0x0C70, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFLODInfluencePlayer* FLODInfluence;  // 0x0C78, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStomachComponent* StomachComponent;  // 0x0C80, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPlayerTerrainAnchorComponent* TerrainAnchor;  // 0x0C88, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ADDGIVolume*> RTXGIVolumes;  // 0x0CE8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAttachedSeatChanged OnAttachedSeatChanged;  // 0x0CF8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPlayersSlept OnPlayersSlept;  // 0x0D08, size 0x10
    UPROPERTY(BlueprintAssignable) FOnInventoryWeightChanged OnInventoryWeightChanged;  // 0x0D18, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPerspectiveUpdated OnPerspectiveUpdated;  // 0x0D28, size 0x10
    UPROPERTY(Replicated, BlueprintReadOnly) FTransform LastInstancedLevelEntry;  // 0x0D50, size 0x30

    // Not reflected: the engine's scripting cannot see these.
    FModifierStatesRowHandle CurrentOxygenModifier;  // 0x0BAC, private
    FModifierStatesRowHandle CurrentFoodModifier;  // 0x0BC4, private
    FModifierStatesRowHandle CurrentWaterModifier;  // 0x0BDC, private
    FModifierStatesRowHandle CurrentRadiationModifer;  // 0x0BF4, private
    int32 OverburdenedModifier;  // 0x0C0C, private
    TTuple<float,float> DeltaMouseInput;  // 0x0C90, private
    TMap<FName,FItemStaticData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FItemStaticData,0> > MetaCurrencies;  // 0x0C98, private
    FBestiaryDataRowHandle LastBestiaryDamageCauser;  // 0x0D38, protected

    UFUNCTION() void AddPitch(float value);  // parameters 0x4
    UFUNCTION() void AddYaw(float value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CacheNearbyComfortAffectingActors(AActor* BedActor);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_FlagWaitingOnInstancedLevelLoad(bool bWaiting, FString UniqueLevelNameIn);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Debug_DrawArmourComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool Debug_GetGOAPWorldStatsActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Debug_SetGOAPWorldStatsActive(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EndCrouch();
    UFUNCTION() EViewTraceResultPriority GetBestViewTraceInteractionHandler(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetCurrentInventoryWeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) EProspectLocation GetCurrentProspectLocation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFPCameraOrientation(FVector& OutPosition, FVector& OutForward);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetFocusedItem() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsInCave() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<FItemData> GetLoadout();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetNameMarkerWorldLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool GetPlayerBestViewResultInteraction(FValidInteractQueriesRowHandle& FoundInteraction, bool& bValidInteraction);  // parameters 0x1A
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSecondaryFocusedItemSlot() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetThermalVisionActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetWantsAutoRun() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool HasCraftingRequirements(FTalentsRowHandle Talent);  // parameters 0x19
    UFUNCTION() void InventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAlive() const;  // parameters 0x1
    UFUNCTION() void MoveForward(float value);  // parameters 0x4
    UFUNCTION() void MoveRight(float value);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void NotifyAddedMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void NotifyAttachedSeatChanged();
    UFUNCTION(BlueprintCallable) void NotifyInventoryWeightChanged(int32 NewWeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NotifyPerspectiveUpdated();
    UFUNCTION(BlueprintCallable) void NotifyPlayersSlept();
    UFUNCTION() void OnActorDamagedBestiary(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION() void OnActorDeathBestiary(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBiomeUpdated();
    UFUNCTION(BlueprintCallable) void OnFoodConsumed();
    UFUNCTION() void OnFoodLevelUpdated(int32 FoodLevel);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnFrozenMovementChanged();
    UFUNCTION() void OnInventoryBouncedItem(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION(BlueprintImplementableEvent) void OnJumpFailed();
    UFUNCTION(BlueprintCallable) void OnOxygenConsumed();
    UFUNCTION() void OnOxygenLevelUpdated(int32 OxygenLevel);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnPlayerDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION() void OnRadiationLevelUpdated(int32 RadiationLevel);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void OnServer_ExitLadder();
    UFUNCTION() void OnTemperatureUpdated(int32 Temperature);  // parameters 0x4
    UFUNCTION() void OnTerrainAnchorStateChanged();
    UFUNCTION(BlueprintCallable) void OnWaterConsumed();
    UFUNCTION() void OnWaterLevelUpdated(int32 WaterLevel);  // parameters 0x4
    UFUNCTION() void RequestMoveForward(float Value);  // parameters 0x4
    UFUNCTION() void Respawn();
    UFUNCTION(BlueprintCallable) void ServerPlayerLeftByDropship();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdateClientFrozenMovement(bool bFreezeMovement);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetADSOffset(const FTransform& NewOffset);  // parameters 0x30
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void SetAimSpaceValues(float Pitch, float Yaw);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetAimVignetteIntensity(float NewIntensityTarget, float InterpSpeed);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetIsTravellingInDropship(bool bIsInDropship);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSpectateTarget(bool bState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetThermalVisionActive(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWantsAutoRun(bool bNewAutoRun);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartCrouch();
    UFUNCTION(BlueprintCallable) void StartJump();
    UFUNCTION(BlueprintCallable) void StopJump();
    UFUNCTION(BlueprintCallable) void ToggleWantsAutoRun();
    UFUNCTION() void UpdateFrozenMovement();
    UFUNCTION(BlueprintCallable) void UpdateMetaResources();

    // Virtual functions that start here:
    //   GetCurrentProspectLocation_Implementation, OnFrozenMovementChanged_Implementation
    //   OnServer_ExitLadder_Implementation, ServerUpdateClientFrozenMovement_Implementation
    //   SetAimSpaceValues_Implementation, SetAimSpaceValues_Validate
};
