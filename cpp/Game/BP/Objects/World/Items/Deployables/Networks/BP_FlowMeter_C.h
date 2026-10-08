// /Game/BP/Objects/World/Items/Deployables/Networks/BP_FlowMeter.BP_FlowMeter_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x774, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FlowMeter_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C, public IBPI_ResourceNetworkInspectorTargetProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_Summary;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum NetworkType;  // 0x0738, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) BPS_FlowMeterData MeterData;  // 0x0748, size 0x28
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 NetworkTypeInt;  // 0x0770, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_FlowMeter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNextValidNetworkType(FIcarusResourcesEnum Current, FIcarusResourcesEnum& Out);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void FindValidNetworkType(FIcarusResourcesEnum& ResourceOut);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTargetNetworkType(FIcarusResourcesEnum& TargetNetworkType);  // parameters 0x10
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_MeterData();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ServerUpdate();
    UFUNCTION(BlueprintCallable) void UpdateWidget();
};
