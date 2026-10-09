// /Game/BP/Building/Dirt/BP_Building_Ramp_CurvedCorner_Dirt.BP_Building_Ramp_CurvedCorner_Dirt_C
// Derives from: ABP_Building_Ramp_Diagonal_Curved_C > ABP_Building_Ramp_Diagonal_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC68, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Ramp_CurvedCorner_Dirt_C : public ABP_Building_Ramp_Diagonal_Curved_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void BuildingStabilityColorCalc(FLinearColor& StabilityColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Calculate_Stability_State_Implementation();  // named "Calculate Stability State Implementation"
};
