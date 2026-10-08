// /Game/BP/Objects/World/Items/Deployables/Drill/BP_Deep_Mining_Drill_Electric.BP_Deep_Mining_Drill_Electric_C
// Derives from: ABP_Drill_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deep_Mining_Drill_Electric_C : public ABP_Drill_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DeepDrilling;  // 0x09C0, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveStateUpdated();
};
