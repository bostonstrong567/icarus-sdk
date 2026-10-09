// /Script/BuildPatchServices.ChunkPartData
// size 0x18, declared in Engine/Source/Runtime/Online/BuildPatchServices/Private/Data/ManifestUObject.h

USTRUCT()
struct FChunkPartData
{
public:
    UPROPERTY() FGuid Guid;  // 0x0000, size 0x10
    UPROPERTY() uint32 Offset;  // 0x0010, size 0x4
    UPROPERTY() uint32 Size;  // 0x0014, size 0x4
};
