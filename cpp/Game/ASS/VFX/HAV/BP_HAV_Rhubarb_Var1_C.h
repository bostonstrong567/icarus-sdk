// /Game/ASS/VFX/HAV/BP_HAV_Rhubarb_Var1.BP_HAV_Rhubarb_Var1_C
// Derives from: ABP_DestructableHarvest_C > ADestructibleActor > AActor > UObject
// size 0x268, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HAV_Rhubarb_Var1_C : public ABP_DestructableHarvest_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_HAV_Rhubarb_Var1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
