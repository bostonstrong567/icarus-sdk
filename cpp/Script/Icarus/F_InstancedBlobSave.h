// /Script/Icarus.InstancedBlobSave
// size 0x40, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedSaveStateHeader.h

USTRUCT()
struct FInstancedBlobSave
{
public:
    UPROPERTY(SaveGame) FString Key;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) FString Hash;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) int32 TotalLength;  // 0x0020, size 0x4
    UPROPERTY(SaveGame) int32 DataLength;  // 0x0024, size 0x4
    UPROPERTY(SaveGame) int32 UncompressedLength;  // 0x0028, size 0x4
    UPROPERTY(SaveGame) FString BinaryBlob;  // 0x0030, size 0x10
};
