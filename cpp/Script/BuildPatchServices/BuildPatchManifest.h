// /Script/BuildPatchServices.BuildPatchManifest
// Derives from: UObject
// size 0x120, declared in Engine/Source/Runtime/Online/BuildPatchServices/Private/Data/ManifestUObject.h

UCLASS()
class UBuildPatchManifest : public UObject
{
public:
    UPROPERTY() uint8 ManifestFileVersion;  // 0x0028, size 0x1
    UPROPERTY() bool bIsFileData;  // 0x0029, size 0x1
    UPROPERTY() uint32 AppID;  // 0x002C, size 0x4
    UPROPERTY() FString AppName;  // 0x0030, size 0x10
    UPROPERTY() FString BuildVersion;  // 0x0040, size 0x10
    UPROPERTY() FString LaunchExe;  // 0x0050, size 0x10
    UPROPERTY() FString LaunchCommand;  // 0x0060, size 0x10
    UPROPERTY() TSet<FString> PrereqIds;  // 0x0070, size 0x50
    UPROPERTY() FString PrereqName;  // 0x00C0, size 0x10
    UPROPERTY() FString PrereqPath;  // 0x00D0, size 0x10
    UPROPERTY() FString PrereqArgs;  // 0x00E0, size 0x10
    UPROPERTY() TArray<FFileManifestData> FileManifestList;  // 0x00F0, size 0x10
    UPROPERTY() TArray<FChunkInfoData> ChunkList;  // 0x0100, size 0x10
    UPROPERTY() TArray<FCustomFieldData> CustomFields;  // 0x0110, size 0x10
};
