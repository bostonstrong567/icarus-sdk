// /Script/Icarus.BanInfo
// size 0x48, declared in Icarus/Source/Icarus/IcarusGameSession.h

USTRUCT()
struct FBanInfo
{
    UPROPERTY() FString AccountId;  // 0x0000, size 0x10
    UPROPERTY() FString AccountJson;  // 0x0010, size 0x10
    UPROPERTY() FText BanReason;  // 0x0020, size 0x18
    UPROPERTY() FString PlayerNameDuringBan;  // 0x0038, size 0x10
};
