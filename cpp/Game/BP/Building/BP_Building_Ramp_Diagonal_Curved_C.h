// /Game/BP/Building/BP_Building_Ramp_Diagonal_Curved.BP_Building_Ramp_Diagonal_Curved_C
// Derives from: ABP_Building_Ramp_Diagonal_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC68, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Ramp_Diagonal_Curved_C : public ABP_Building_Ramp_Diagonal_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_Environmental_Buildup_Skeletal_C* BPC_Environmental_Buildup_Skeletal;  // 0x0C60, size 0x8

    UFUNCTION(BlueprintCallable) void GetBlockingBypass(TSubclassOf<ABP_Building_Base_C> BuildingClass, TArray<FVectorPair>& BlockingPreRotate, FTransform GridSpaceTransform, TArray<FVectorPair>& BypassBlocking);  // parameters 0x60
};
