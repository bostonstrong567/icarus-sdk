// /Script/Icarus.SettlementBuildingUpgradeInfo
// size 0x68, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/SettlementBuilding.generated.h

USTRUCT()
struct FSettlementBuildingUpgradeInfo
{
public:
    UPROPERTY(BlueprintReadOnly) FSettlementBuildingsRowHandle Row;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadOnly) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(BlueprintReadOnly) FText Description;  // 0x0030, size 0x18
    UPROPERTY(BlueprintReadOnly) bool bTalentUnlocked;  // 0x0048, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bAffordable;  // 0x0049, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bCanUpgrade;  // 0x004A, size 0x1
    UPROPERTY(BlueprintReadOnly) FText FailureReason;  // 0x0050, size 0x18
};
