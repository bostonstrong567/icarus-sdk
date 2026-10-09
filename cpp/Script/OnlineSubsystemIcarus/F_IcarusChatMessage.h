// /Script/OnlineSubsystemIcarus.IcarusChatMessage
// size 0x30, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FIcarusChatMessage
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PlayerName;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ChatMessage;  // 0x0020, size 0x10
};
