// /Script/Icarus.DropShipEvent
// size 0x38, declared in Icarus/Source/Icarus/Systems/Dropship/DropShipEvent.h

USTRUCT()
struct FDropShipEvent : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropShipActionsRowHandle Action;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TriggerTime;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Complete;  // 0x0034, size 0x1
};
