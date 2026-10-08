// /Game/BP/Objects/World/Items/Deployables/Missions/BP_EDSCanister.BP_EDSCanister_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x731, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_EDSCanister_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Activate;  // 0x0730, size 0x1

    UFUNCTION(BlueprintCallable) void OnRep_Activate();
};
