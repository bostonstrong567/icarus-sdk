// /Game/BP/Objects/World/Items/Deployables/Signs/BP_Ranch_Gate_Sign.BP_Ranch_Gate_Sign_C
// Derives from: ABP_Sign_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ranch_Gate_Sign_C : public ABP_Sign_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DCO_Giant_Ranch_Sign_Gate_Door02;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DCO_Giant_Ranch_Sign_Gate_Door01;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bOpen;  // 0x07B8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DisableForcedAnimUpdates();
    UFUNCTION() void ExecuteUbergraph_BP_Ranch_Gate_Sign(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_bOpen();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TemporarilyForceAnimUpdates();
    UFUNCTION(BlueprintCallable) void UpdateSign(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateSignWidgetText();
};
