// /Game/BP/Building/BP_Building_Roof_Peak_Connector.BP_Building_Roof_Peak_Connector_C
// Derives from: ABP_Building_Ramp_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Roof_Peak_Connector_C : public ABP_Building_Ramp_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildupChild_C* BPC_EnvironmentalBuildupChild;  // 0x0C68, size 0x8

    UFUNCTION(BlueprintCallable) void GetBlockingBypass(TSubclassOf<ABP_Building_Base_C> BuildingClass, TArray<FVectorPair>& BlockingPreRotate, FTransform GridSpaceTransform, TArray<FVectorPair>& BypassBlocking);  // parameters 0x60
};
