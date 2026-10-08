// /Game/BP/Objects/World/Items/Deployables/Batteries/BP_Battery_Shelf_T3.BP_Battery_Shelf_T3_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Battery_Shelf_T3_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Battery_Shelf_T3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
