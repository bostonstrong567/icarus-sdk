// /Script/Icarus.SettlementEventData
// size 0xB8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/Settlement.generated.h

USTRUCT()
struct FSettlementEventData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementEventTypesRowHandle EventType;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementEventOutcomeData> PossibleOutcomes;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinSettlementLevel;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Weight;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurationDays;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProximityTriggerRange;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultOutcomeIndex;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifier> ActiveModifiers;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverridesNPCActivity;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementNPCActivity ActivityOverride;  // 0x0099, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementRaidsRowHandle RaidConfig;  // 0x009C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bResolveAsRaidOnly;  // 0x00B4, size 0x1
};
