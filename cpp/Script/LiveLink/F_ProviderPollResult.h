// /Script/LiveLink.ProviderPollResult
// size 0x38, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkMessageBusFinder.h

USTRUCT()
struct FProviderPollResult
{
public:
    FMessageAddress Address;  // 0x0000, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Name;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString MachineName;  // 0x0020, size 0x10
    UPROPERTY() double MachineTimeOffset;  // 0x0030, size 0x8
};
