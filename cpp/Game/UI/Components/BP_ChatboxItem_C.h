// /Game/UI/Components/BP_ChatboxItem.BP_ChatboxItem_C
// Derives from: UObject
// size 0x80, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ChatboxItem_C : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EChatMessageType> MessageType;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Message;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusPlayerChatMessage PlayerMessage;  // 0x0040, size 0x40
};
