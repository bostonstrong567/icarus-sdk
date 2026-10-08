// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Enzyme_Disperser.BP_Enzyme_Disperser_C
// Derives from: ABP_Deployable_ManualToggle_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x790, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Enzyme_Disperser_C : public ABP_Deployable_ManualToggle_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Enzyme_Propagation_Unit;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam5;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam1;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam4;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam3;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam2;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Effects;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActivateAerosol;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0788, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveUpdated(bool bNewActive);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Enzyme_Disperser(int32 EntryPoint);  // parameters 0x4
};
