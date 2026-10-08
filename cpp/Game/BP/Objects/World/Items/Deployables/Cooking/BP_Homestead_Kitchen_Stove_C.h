// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Homestead_Kitchen_Stove.BP_Homestead_Kitchen_Stove_C
// Derives from: ABP_Kitchen_Stove_C > ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA88, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Homestead_Kitchen_Stove_C : public ABP_Kitchen_Stove_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A80, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Homestead_Kitchen_Stove(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
