// /Script/Icarus.SerializedStructure
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/PrebuiltStructure.generated.h

USTRUCT()
struct FSerializedStructure
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSerializedGrid> Grids;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSerializedDeployable> Deployables;  // 0x0010, size 0x10
    UPROPERTY() TArray<FStateRecorderBlob> RecorderBlobs;  // 0x0020, size 0x10
};
