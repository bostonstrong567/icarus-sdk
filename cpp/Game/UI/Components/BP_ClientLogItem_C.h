// /Game/UI/Components/BP_ClientLogItem.BP_ClientLogItem_C
// Derives from: UObject
// size 0x58, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ClientLogItem_C : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusLogEntry LogEntry;  // 0x0028, size 0x30
};
