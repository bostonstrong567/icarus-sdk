// /Game/BP/Objects/World/Items/Deployables/Containers/BP_ArmourStand_T4.BP_ArmourStand_T4_C
// Derives from: ABP_ArmourStand_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7FA, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ArmourStand_T4_C : public ABP_ArmourStand_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* ArmorCase;  // 0x07F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool CaseOpen;  // 0x07F8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsInteracting;  // 0x07F9, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_ArmourStand_T4(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ToggleOpen();
};
