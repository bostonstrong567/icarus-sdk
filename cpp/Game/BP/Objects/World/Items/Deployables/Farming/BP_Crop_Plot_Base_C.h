// /Game/BP/Objects/World/Items/Deployables/Farming/BP_Crop_Plot_Base.BP_Crop_Plot_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x831, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Crop_Plot_Base_C : public ABP_DeployableBase_C, public IBP_WeatherInteractable_C, public ICropPlotRecorderInterface, public IBP_TooltipWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FoilageCulling;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CropSnappingPoint;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Crop;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Watering;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UCultivation*, UStaticMeshComponent*> Cultivations;  // 0x0758, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GlasshousePieceThreshold;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutsideModifierID;  // 0x07AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GlassHouseModifierID;  // 0x07B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WateredModifierUID;  // 0x07B4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SoilWet;  // 0x07B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnergyModifierUID;  // 0x07BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* SoilMatDry;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* SoilMatWet;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SoilMatID;  // 0x07D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasGlasshouseModifier;  // 0x07D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasSunlightModifier;  // 0x07D5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasNoSunModifier;  // 0x07D6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NoSunModifierID;  // 0x07D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentGlasshousePieces;  // 0x07DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GlasshousePiecesRequiredForSunBonus;  // 0x07E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasBiomeExposureModifier;  // 0x07E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BiomeExposureModifierUID;  // 0x07E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresEnum CurrentBiomeEnum;  // 0x07F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SeedIsCorrectBiome;  // 0x0800, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle CurrentBiome;  // 0x0804, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentWaterModifierEffectiveness;  // 0x081C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasWaterConnectionModifier;  // 0x0820, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WaterDisconnectedModifierStayTime;  // 0x0824, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 CultivationsHealth;  // 0x0828, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 CultivationsMaxHealth;  // 0x082C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CurrentlyGrowingOutside;  // 0x0830, size 0x1

    UFUNCTION(BlueprintCallable) void ApplyBiomeExposureModifier(FModifierStatesRowHandle Modifier, int32 Effectiveness);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CacheBiomeType();
    UFUNCTION(BlueprintCallable) void CanFertilize(bool& CanBeFertilized);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanHarvest(UStaticMeshComponent* StaticMeshComponent, bool& CanHarvest) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanHarvestAny(bool& CanHarvest) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanPlantSeed(const FItemData& ItemData, int32 Cultivation, bool& CanPlant);  // parameters 0x1F5
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanWater(bool& bCanWater);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckWantsFlow(bool& WantsFlow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ClearCultivation(int32 Cultivation);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DEBUG_PrintInfoLoop();
    UFUNCTION(BlueprintCallable) void DelayedUpdateWaterModifier();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Crop_Plot_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FertilizePlot(FItemData FertilizerItem, bool& Fertalized);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAudioData(FFarmingSeedAudioData& Data);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetCropPlotValues(TArray<FCultivationSaveData>& SaveData);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCultivationFromMesh(UStaticMeshComponent* StaticMesh, UCultivation*& Cultivation) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetFertilizerModifier(UModifierStateComponent*& Modifier);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetTooltipClassOverride(TSoftClassPtr<UHuntingWidget>& ClassOverride);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetTooltipRenderLocation(FHitResult InteractableHit, FVector& WorldLocation) const;  // parameters 0x94
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HarvestResource(AActor* HarvestingActor, const UStaticMeshComponent*& StaticMeshComponent, bool bUsingSickle, UInventory* NonPlayerInventoryX, bool& Harvested);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasAliveCrops(bool& CropsAlive);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasAnySeeds(bool& IsSeeded) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HasSeed(int32 Cultivation, bool& IsSeeded) const;  // parameters 0x5
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void IsFertilized(bool& Fertilized);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayItemAddedAudio(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlaySound(UFMODEvent* FMODEvent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ManuallyWater();
    UFUNCTION(BlueprintCallable, NetMulticast) void Multi_CropStormDamage(bool Destroyed);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnGrowthStateUpdated(UCultivation* Cultivation, EPlantGrowthStates GrowthState);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnLoaded_002CDE2F457F54BDFC92D7AEFED0E4AA(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnModifierUpdated(UModifierStateComponent* Component, bool bRemoved);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_SoilWet();
    UFUNCTION(BlueprintCallable) void OnSeedUpdated(UCultivation* Cultivation, FFarmingSeedsRowHandle FarmingSeed);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void PlantSeed(FItemData NewSeed, int32 Cultivation, AIcarusPlayerCharacter* Player, bool& Planted);  // parameters 0x201
    UFUNCTION(BlueprintCallable) void PlayClearPlotFX();
    UFUNCTION(BlueprintCallable) void PlayFertilizerFX(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PlayHarvestFX();
    UFUNCTION(BlueprintCallable) void PlaySeedPlantedFX();
    UFUNCTION(BlueprintCallable) void PlaySound(UFMODEvent* FMODEvent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayWateringFX();
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RemoveBiomeExposureModifier();
    UFUNCTION(BlueprintCallable) void ResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void ScaleBasedOnQuality(FItemData Input, FItemData& Output);  // parameters 0x3E0
    UFUNCTION(BlueprintImplementableEvent) void SetCropPlotValues(const TArray<FCultivationSaveData>& SaveData);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSoilState(bool bWet);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void SetupCultivations(TMap<UCultivation*, UStaticMeshComponent*>& Cultivations);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCultivationMesh(UCultivation* Cultivation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateEnergyConnectionModifier();
    UFUNCTION(BlueprintCallable) void UpdateGlasshouseAndOutsideModifiers();
    UFUNCTION(BlueprintCallable) void UpdateQuality();
    UFUNCTION(BlueprintCallable) void UpdateWantsFlow();
    UFUNCTION(BlueprintCallable) void UpdateWaterConnectionModifier();
};
