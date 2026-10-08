// /Game/BP/Objects/World/Items/Deployables/Furniture/BP_Animal_Bed_Zebra.BP_Animal_Bed_Zebra_C
// Derives from: ABP_Animal_Bed_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Animal_Bed_Zebra_C : public ABP_Animal_Bed_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Animal_Bed_Zebra(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
