// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Aquarium.BP_Aquarium_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x83C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Aquarium_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* SwimmableArea;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* AudioBubbles;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* VFXAndLighting;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Fish1Location;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Dressing;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GlassMesh;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RecDowntLight;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Bubble5;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Bubble4;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Bubble3;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Bubble2;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Bubble1;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* CleanMesh;  // 0x07B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DirtyMesh;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* CleanGlass;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DirtyGlass;  // 0x07D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightIntensity;  // 0x07D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> FishMovementTargetLocations;  // 0x07E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> GetNewTargetLocationTimes;  // 0x07F0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FItemData> FishArray;  // 0x0800, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> FishComponents;  // 0x0810, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool EffectState;  // 0x0820, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* OffMaterial;  // 0x0828, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* OnMaterial;  // 0x0830, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaterialSlot;  // 0x0838, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Aquarium(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFishMeshes(TArray<USkeletalMeshComponent*>& SkeletalMeshes) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetNewMovementTargetLocation(USkeletalMeshComponent* FishComponent, FVector& TargetLocation, bool& FoundValidLocation) const;  // parameters 0x15
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_60B8164F46CDB00B131057B2E772CE31(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_EffectState();
    UFUNCTION(BlueprintCallable) void OnRep_FishArray();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateAllFish(UInventory* Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateFishMeshes();
};
