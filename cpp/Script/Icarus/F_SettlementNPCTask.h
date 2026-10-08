// /Script/Icarus.SettlementNPCTask
// size 0x54, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCTask
{
    UPROPERTY(BlueprintReadWrite) FGuid TaskId;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle ActiveTaskType;  // 0x0010, size 0x18
    UPROPERTY(BlueprintReadWrite) TWeakObjectPtr<AActor> Target;  // 0x0028, size 0x8
    UPROPERTY(BlueprintReadWrite) TWeakObjectPtr<AActor> Source;  // 0x0030, size 0x8
    UPROPERTY(BlueprintReadWrite) float Progress;  // 0x0038, size 0x4
    UPROPERTY(BlueprintReadWrite) uint8 Priority;  // 0x003C, size 0x1
    UPROPERTY(BlueprintReadWrite) FGuid AssignedNpcId;  // 0x0040, size 0x10
    UPROPERTY(BlueprintReadWrite) ESettlementTaskOrigin Origin;  // 0x0050, size 0x1
};
