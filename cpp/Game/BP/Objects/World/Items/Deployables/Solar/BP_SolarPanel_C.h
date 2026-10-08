// /Game/BP/Objects/World/Items/Deployables/Solar/BP_SolarPanel.BP_SolarPanel_C
// Derives from: ABP_SolarPanel_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SolarPanel_C : public ABP_SolarPanel_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Power_Level;  // 0x0748, size 0x8

    UFUNCTION(BlueprintCallable) void UpdatePoweredEffects();
};
