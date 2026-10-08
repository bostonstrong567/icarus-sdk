// /Game/BP/Objects/World/Items/Deployables/Beds/BP_Meta_Cot_Printed.BP_Meta_Cot_Printed_C
// Derives from: ABP_BedBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Meta_Cot_Printed_C : public ABP_BedBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Meta_Cot_Printed(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
