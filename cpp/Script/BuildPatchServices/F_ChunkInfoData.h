// /Script/BuildPatchServices.ChunkInfoData
// size 0x40, declared in Engine/Source/Runtime/Online/BuildPatchServices/Private/Data/ManifestUObject.h

USTRUCT()
struct FChunkInfoData
{
public:
    UPROPERTY() FGuid Guid;  // 0x0000, size 0x10
    UPROPERTY() uint64 Hash;  // 0x0010, size 0x8
    UPROPERTY() FSHAHashData ShaHash;  // 0x0018, size 0x14
    UPROPERTY() int64 FileSize;  // 0x0030, size 0x8
    UPROPERTY() uint8 GroupNumber;  // 0x0038, size 0x1
};
