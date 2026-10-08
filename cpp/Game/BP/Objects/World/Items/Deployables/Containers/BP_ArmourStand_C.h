// /Game/BP/Objects/World/Items/Deployables/Containers/BP_ArmourStand.BP_ArmourStand_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E5, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ArmourStand_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsUpdate;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSubclassOf<UObject>> Stored_Classes;  // 0x0760, size 0x10, named "Stored Classes"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> Stored_Objects;  // 0x0770, size 0x10, named "Stored Objects"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<USkeletalMeshComponent*, FItemData> CurrentlyEquippedItems;  // 0x0780, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UAnimSequence*> AnimationPoses;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 CurrentAnimPose;  // 0x07E0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool SwapBackpack;  // 0x07E4, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_ArmourStand(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetArmourDataSoftObjects(TArray<TSoftObjectPtr<USkeletalMesh>>& SoftMeshes, TArray<TSoftClassPtr<UAnimInstance>>& SoftAnimBPs);  // parameters 0x20
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnItemUpdated();
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B7F3250D31(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_E27239C84FEE2ECDA1A4DC9FA017A88C(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_CurrentAnimPose();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ServerSwapArmour(AActor* Instigating_Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Server_OnItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateAnimPose();
    UFUNCTION(BlueprintCallable) void UpdateEquippedArmour();
    UFUNCTION(BlueprintCallable) void UpdateHighlightable(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
};
