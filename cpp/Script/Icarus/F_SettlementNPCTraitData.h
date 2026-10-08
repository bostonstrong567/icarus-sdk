// /Script/Icarus.SettlementNPCTraitData
// size 0xE0, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCTraitData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> StatsGranted;  // 0x0070, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RollWeight;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ExclusiveGroup;  // 0x00C4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCRolesRowHandle> AllowedRoles;  // 0x00D0, size 0x10
};
