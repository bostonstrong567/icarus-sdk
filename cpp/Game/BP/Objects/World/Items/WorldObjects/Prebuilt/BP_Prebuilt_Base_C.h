// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_Prebuilt_Base.BP_Prebuilt_Base_C
// Derives from: APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x428, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prebuilt_Base_C : public APrebuiltStructure
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<ABuildingGridBase> GridBaseClass;  // 0x0338, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABuildingGridBase* CurrentGrid;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSpawningComplete SpawningComplete;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSerializedStructure CachedStructure;  // 0x0378, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentGridIndex;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform CurrentGridTransform;  // 0x03B0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform CurrentActorTransform;  // 0x03E0, size 0x30
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShowMapIcon;  // 0x0410, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TArray<ABP_WorldObject_C*> WorldObjectDecals;  // 0x0418, size 0x10

    UFUNCTION(BlueprintCallable) void Add_Items_to_Actor(AActor* Object, FInventoryIDEnum InventoryID, TMap<FItemsStaticRowHandle, int32> Items);  // parameters 0x68, named "Add Items to Actor"
    UFUNCTION(BlueprintImplementableEvent) void BP_CleanupStructure(float Lifetime);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void BP_NotifyBuildComplete();
    UFUNCTION(BlueprintCallable) void BlueprintLoad(FSerializedStructure CachedStructure);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void DamageStructure(int32 RawValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void EnableStormClearDecal();
    UFUNCTION(BlueprintCallable) void EndRecording();
    UFUNCTION() void ExecuteUbergraph_BP_Prebuilt_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindDeployables(FItemsStaticRowHandle Row, TArray<ADeployable*>& FoundDeployables);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool LoadStructure(FSerializedStructure SerializedStructure);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnLoaded_71C24261460C53F5162670BAF5917A5B(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_BF3978C54E3865DD2BB7019BB448624D(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_ShowMapIcon();
    UFUNCTION(BlueprintCallable) void OptimizeDecals();
    UFUNCTION(BlueprintCallable) void PopulateWithLoot(FItemRewardsRowHandle ItemRewards);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SpawningComplete__DelegateSignature();
};
