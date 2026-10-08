// /Game/BP/Objects/World/Interactables/InteractableParts/BP_HolographicObject.BP_HolographicObject_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x4E2, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HolographicObject_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x02E0, size 0x1F0
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UInventoryComponent* ItemInventory;  // 0x04D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* NewMaterial;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ProcessorPreview> State;  // 0x04E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SkeletalSet;  // 0x04E1, size 0x1

    UFUNCTION(BlueprintCallable) void Create();
    UFUNCTION() void ExecuteUbergraph_BP_HolographicObject(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetItem(FItemData& NewParam);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void LoadItemMesh(TSoftObjectPtr<UObject> MeshToLoad);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnLoaded_7DE56D4A41E366966B10B1A45EFDB124(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetState(TEnumAsByte<ProcessorPreview> Preview);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateVisibility(bool Visible);  // parameters 0x1
};
