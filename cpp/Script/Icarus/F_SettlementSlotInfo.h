// /Script/Icarus.SettlementSlotInfo
// size 0x80, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementSlotInfo
{
public:
    UPROPERTY(BlueprintReadOnly) int32 SlotIndex;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadOnly) FGuid TaskId;  // 0x0004, size 0x10
    UPROPERTY(BlueprintReadOnly) FSettlementTasksRowHandle Task;  // 0x0014, size 0x18
    UPROPERTY(BlueprintReadOnly) FText TaskDisplayName;  // 0x0030, size 0x18
    UPROPERTY(BlueprintReadOnly) FGuid NpcId;  // 0x0048, size 0x10
    UPROPERTY(BlueprintReadOnly) FText NpcDisplayName;  // 0x0058, size 0x18
    UPROPERTY(BlueprintReadOnly) ASettlementNPCCharacter* NpcActor;  // 0x0070, size 0x8
    UPROPERTY(BlueprintReadOnly) bool bAutoAssign;  // 0x0078, size 0x1
};
