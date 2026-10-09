// /Game/BP/Building/BP_Building_Wall_Diagonal_Curved_Half_Angle_Down_R_Invert.BP_Building_Wall_Diagonal_Curved_Half_Angle_Down_R_Invert_C
// Derives from: ABP_Building_Wall_Diagonal_Curved_C > ABP_Building_Wall_Diagonal_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC58, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Wall_Diagonal_Curved_Half_Angle_Down_R_Invert_C : public ABP_Building_Wall_Diagonal_Curved_C
{
public:
    UFUNCTION(BlueprintCallable) void GetBlockingBypass(TSubclassOf<ABP_Building_Base_C> BuildingClass, TArray<FVectorPair>& BlockingPreRotate, FTransform GridSpaceTransform, TArray<FVectorPair>& BypassBlocking);  // parameters 0x60
};
