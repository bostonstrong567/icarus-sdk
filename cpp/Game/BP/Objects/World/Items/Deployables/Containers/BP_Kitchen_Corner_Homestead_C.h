// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Kitchen_Corner_Homestead.BP_Kitchen_Corner_Homestead_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Kitchen_Corner_Homestead_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Kitchen_Corner_Homestead(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
