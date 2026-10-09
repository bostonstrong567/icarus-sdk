// /Script/Icarus.MountSaveData
// size 0x70, declared in Icarus/Source/Icarus/AI/Mounts/MountSaveData.h

USTRUCT()
struct FMountSaveData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DatabaseGUID;  // 0x0000, size 0x10
    UPROPERTY() FStateRecorderBlob RecorderBlob;  // 0x0010, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MountName;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MountLevel;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MountType;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MountIconName;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) AActor* ActorRepresentation;  // 0x0068, size 0x8
};
