// /Game/BP/Objects/World/Items/Deployables/Windows/BP_Window_Homestead_Shutter.BP_Window_Homestead_Shutter_C
// Derives from: ABP_Window_Reinforced_C > ABP_Window_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x770, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Window_Homestead_Shutter_C : public ABP_Window_Reinforced_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0768, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Window_Homestead_Shutter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
