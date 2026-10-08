// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Advanced_Fishing_Trap.BP_Advanced_Fishing_Trap_C
// Derives from: ABP_Basic_Fishing_Trap_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x780, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Advanced_Fishing_Trap_C : public ABP_Basic_Fishing_Trap_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0778, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Advanced_Fishing_Trap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
