// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Aerosol_Emitter.BP_Aerosol_Emitter_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x751, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Aerosol_Emitter_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActivateAerosol;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Active;  // 0x0750, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Aerosol_Emitter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOff();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOn();
    UFUNCTION(BlueprintCallable) void OnRep_Active();
};
