// /Script/BuildPatchServices.FileManifestData
// size 0x68, declared in Engine/Source/Runtime/Online/BuildPatchServices/Private/Data/ManifestUObject.h

USTRUCT()
struct FFileManifestData
{
    UPROPERTY() FString Filename;  // 0x0000, size 0x10
    UPROPERTY() FSHAHashData FileHash;  // 0x0010, size 0x14
    UPROPERTY() TArray<FChunkPartData> FileChunkParts;  // 0x0028, size 0x10
    UPROPERTY() TArray<FString> InstallTags;  // 0x0038, size 0x10
    UPROPERTY() bool bIsUnixExecutable;  // 0x0048, size 0x1
    UPROPERTY() FString SymlinkTarget;  // 0x0050, size 0x10
    UPROPERTY() bool bIsReadOnly;  // 0x0060, size 0x1
    UPROPERTY() bool bIsCompressed;  // 0x0061, size 0x1
};
