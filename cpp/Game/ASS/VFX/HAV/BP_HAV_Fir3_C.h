// /Game/ASS/VFX/HAV/BP_HAV_Fir3.BP_HAV_Fir3_C
// Derives from: ABP_DestructableHarvest_C > ADestructibleActor > AActor > UObject
// size 0x268, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HAV_Fir3_C : public ABP_DestructableHarvest_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_HAV_Fir3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
