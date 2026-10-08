// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Large_Advanced_Aquarium.BP_Large_Advanced_Aquarium_C
// Derives from: ABP_Advanced_Aquarium_C > ABP_Aquarium_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x850, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Large_Advanced_Aquarium_C : public ABP_Advanced_Aquarium_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0848, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Large_Advanced_Aquarium(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
