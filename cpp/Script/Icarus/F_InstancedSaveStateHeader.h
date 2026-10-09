// /Script/Icarus.InstancedSaveStateHeader
// size 0x40, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedSaveStateHeader.h

USTRUCT()
struct FInstancedSaveStateHeader
{
public:
    UPROPERTY(BlueprintReadOnly) int32 Version;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadOnly) FString UniqueLevelName;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadOnly) int32 SubCaveID;  // 0x0020, size 0x4
    UPROPERTY(BlueprintReadOnly) FDateTime LastSavedDateTime;  // 0x0028, size 0x8
    UPROPERTY() TArray<FStateRecorderBlob> StateRecorderBlobs;  // 0x0030, size 0x10
};
