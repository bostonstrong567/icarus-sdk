// /Game/BP/Building/Dirt/BP_Building_Frame_Dirt.BP_Building_Frame_Dirt_C
// Derives from: ABP_Building_Frame_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xCF0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Frame_Dirt_C : public ABP_Building_Frame_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CE8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void BuildingStabilityColorCalc(FLinearColor& StabilityColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Calculate_Stability_State_Implementation();  // named "Calculate Stability State Implementation"
    UFUNCTION() void ExecuteUbergraph_BP_Building_Frame_Dirt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
