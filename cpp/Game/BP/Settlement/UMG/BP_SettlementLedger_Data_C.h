// /Game/BP/Settlement/UMG/BP_SettlementLedger_Data.BP_SettlementLedger_Data_C
// Derives from: UObject
// size 0x38, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SettlementLedger_Data_C : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* LinkedSettlement;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlementBuilding* BuildingActor;  // 0x0030, size 0x8
};
