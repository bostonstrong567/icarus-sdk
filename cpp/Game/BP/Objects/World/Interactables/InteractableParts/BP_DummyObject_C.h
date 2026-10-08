// /Game/BP/Objects/World/Interactables/InteractableParts/BP_DummyObject.BP_DummyObject_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x6D9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DummyObject_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData Item;  // 0x02E0, size 0x1F0
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ItemLocation;  // 0x04D0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UInventory* ItemInventory;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* NewMaterial;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData LocalItem;  // 0x04E8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SkeletalSet;  // 0x06D8, size 0x1

    UFUNCTION(BlueprintCallable) void Create();
    UFUNCTION(BlueprintCallable) void CreateLocal(FItemData Item);  // parameters 0x1F0
    UFUNCTION() void ExecuteUbergraph_BP_DummyObject(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initilaise(FItemData Item, int32 Location, UInventory* Inventory);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void LoadItemMesh(TSoftObjectPtr<UObject> MeshToLoad);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnLoaded_F290FD0849F356AD3452B8A99B8E0F60(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_Item();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetState(TEnumAsByte<ProcessorPreview> Preview);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateVisibility(bool Visibility);  // parameters 0x1
};
