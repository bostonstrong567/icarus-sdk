// /Game/BP/Objects/World/Items/Deployables/Drill/BP_Deep_Mining_Drill_Oil.BP_Deep_Mining_Drill_Oil_C
// Derives from: ABP_Drill_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deep_Mining_Drill_Oil_C : public ABP_Drill_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Steel_Barrel;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_DeepMiningDrill_T5;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DeepDrilling;  // 0x09D0, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveStateUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_Deep_Mining_Drill_Oil(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
