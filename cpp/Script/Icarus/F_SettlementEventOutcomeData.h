// /Script/Icarus.SettlementEventOutcomeData
// size 0xF0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/Settlement.generated.h

USTRUCT()
struct FSettlementEventOutcomeData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCraftingInput> ItemCost;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueryInput> QueryItemCost;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceItem> ResourceCost;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCRolesRowHandle RequiredRole;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredRoleCount;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCraftingInput> ItemRewards;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceItem> ResourceRewards;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceReward;  // 0x00A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CostDeviation;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RewardDeviation;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementOutcomeModifier> Modifiers;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementRaidsRowHandle RaidConfig;  // 0x00D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementNPCAilment InflictAilment;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InflictAilmentCount;  // 0x00EC, size 0x4
};
