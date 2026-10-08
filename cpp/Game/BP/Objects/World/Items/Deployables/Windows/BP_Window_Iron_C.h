// /Game/BP/Objects/World/Items/Deployables/Windows/BP_Window_Iron.BP_Window_Iron_C
// Derives from: ABP_Window_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Window_Iron_C : public ABP_Window_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Window_Iron(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
