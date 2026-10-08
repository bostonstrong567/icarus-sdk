// /Game/BP/Objects/World/Items/Deployables/Composter/BP_Composter_Electric.BP_Composter_Electric_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Composter_Electric_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x09A8, size 0x8
};
