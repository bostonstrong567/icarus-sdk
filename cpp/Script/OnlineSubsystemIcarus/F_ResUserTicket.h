// /Script/OnlineSubsystemIcarus.ResUserTicket
// size 0x20, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FResUserTicket
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Result;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Reason;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELoginFailure LoginFailure;  // 0x0018, size 0x1
};
