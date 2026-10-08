// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Homestead_Kitchen_Sink.BP_Homestead_Kitchen_Sink_C
// Derives from: ABP_Advanced_Kitchen_Sink_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Homestead_Kitchen_Sink_C : public ABP_Advanced_Kitchen_Sink_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetWaterModifiers(TArray<FAlterationsEnum>& Array);  // parameters 0x10
};
