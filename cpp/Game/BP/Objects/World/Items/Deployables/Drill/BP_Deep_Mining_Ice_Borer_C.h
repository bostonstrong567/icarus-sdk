// /Game/BP/Objects/World/Items/Deployables/Drill/BP_Deep_Mining_Ice_Borer.BP_Deep_Mining_Ice_Borer_C
// Derives from: ABP_Drill_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deep_Mining_Ice_Borer_C : public ABP_Drill_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_IceBorer_T3;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_BiofuelBurn;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DeepDrilling;  // 0x09C0, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveStateUpdated();
};
