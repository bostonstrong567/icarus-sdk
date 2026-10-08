// /Game/BP/Building/BP_Building_RoofCurvedAngle_L_Up_Invert.BP_Building_RoofCurvedAngle_L_Up_Invert_C
// Derives from: ABP_Building_InvRoofCorner_C > ABP_Building_Ramp_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC68, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_RoofCurvedAngle_L_Up_Invert_C : public ABP_Building_InvRoofCorner_C
{
public:

    UFUNCTION(BlueprintCallable) void GetBlockingBypass(TSubclassOf<ABP_Building_Base_C> BuildingClass, TArray<FVectorPair>& BlockingPreRotate, FTransform GridSpaceTransform, TArray<FVectorPair>& BypassBlocking);  // parameters 0x60
};
