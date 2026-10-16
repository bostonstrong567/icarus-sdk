// /Game/BP/Objects/World/Items/Deployables/Containers/BP_ArmourStand_T4.BP_ArmourStand_T4_C
// Derives from: ABP_ArmourStand_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x80B, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ArmourStand_T4_C : public ABP_ArmourStand_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DEP_Armor_Stand_T4_Case;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool CaseOpen;  // 0x0808, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsInteracting;  // 0x0809, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DeviceIsOn;  // 0x080A, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_ArmourStand_T4(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintCallable) void OnRep_DeviceIsOn();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RepairArmor();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ToggleOpen();
};
