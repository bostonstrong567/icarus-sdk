// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C
// Derives from: ABP_SkeletalItem_Wood_Flare_C > ABP_SkeletalItem_LightBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x660, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Wood_Rag_Torch_C : public ABP_SkeletalItem_Wood_Flare_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0650, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_TorchRag_FireShell;  // 0x0658, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Wood_Rag_Torch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetThirdPersonOnlyComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void LightUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
