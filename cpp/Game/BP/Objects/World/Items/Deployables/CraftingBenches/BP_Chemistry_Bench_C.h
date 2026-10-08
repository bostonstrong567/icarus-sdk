// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Chemistry_Bench.BP_Chemistry_Bench_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9F9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Chemistry_Bench_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ChemistryBench_Bubbling;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ChemistryBench_Smoke;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_LightBulb;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_LightSocket_SM_ORB_LightSocket_Cage;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ChemistBench_Flame;  // 0x09E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* LampEmissive;  // 0x09F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasSupply;  // 0x09F8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Chemistry_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FXNoPower();
    UFUNCTION(BlueprintCallable) void FXPowered();
    UFUNCTION(BlueprintCallable) void GetNetworkSupply();
    UFUNCTION(BlueprintCallable) void OnRep_HasSupply();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
