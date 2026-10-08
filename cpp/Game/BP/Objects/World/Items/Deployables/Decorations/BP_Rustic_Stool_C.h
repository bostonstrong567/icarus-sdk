// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Rustic_Stool.BP_Rustic_Stool_C
// Derives from: ABP_ChairBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rustic_Stool_C : public ABP_ChairBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Rustic_Stool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
