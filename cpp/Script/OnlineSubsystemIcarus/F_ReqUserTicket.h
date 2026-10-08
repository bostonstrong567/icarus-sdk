// /Script/OnlineSubsystemIcarus.ReqUserTicket
// size 0x20, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FReqUserTicket
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Ticket;  // 0x0010, size 0x10
};
