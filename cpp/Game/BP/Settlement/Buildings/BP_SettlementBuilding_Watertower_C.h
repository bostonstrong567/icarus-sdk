// /Game/BP/Settlement/Buildings/BP_SettlementBuilding_Watertower.BP_SettlementBuilding_Watertower_C
// Derives from: ABP_SettlementBuilding_C > ASettlementBuilding > AIcarusActor > AActor > UObject
// size 0x538, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementBuilding_Watertower_C : public ABP_SettlementBuilding_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaWaterProduction;  // 0x04C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WaterProductionPerDay;  // 0x04C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTask CurrentTask;  // 0x04C8, size 0x70

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TickActiveBuilding(float ProspectTimeDelta);  // parameters 0x4
};
