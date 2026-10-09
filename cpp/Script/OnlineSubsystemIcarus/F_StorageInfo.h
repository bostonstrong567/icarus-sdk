// /Script/OnlineSubsystemIcarus.StorageInfo
// size 0x30, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FStorageInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Key;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Hash;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HashType;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UncompressedLength;  // 0x0028, size 0x4
};
