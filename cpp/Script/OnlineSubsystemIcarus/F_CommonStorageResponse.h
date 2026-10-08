// /Script/OnlineSubsystemIcarus.CommonStorageResponse
// size 0x28, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FCommonStorageResponse : public FCommonResponse
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Key;  // 0x0018, size 0x10
};
