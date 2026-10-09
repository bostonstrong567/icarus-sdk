// /Script/OnlineSubsystemIcarus.IcarusConnectionToken
// size 0x18, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FIcarusConnectionToken
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExpiredTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Token;  // 0x0008, size 0x10
};
