// /Script/Icarus.FLODInstanceID
// size 0x10, declared in Icarus/Source/Icarus/Systems/FLOD/FLODInstanceID.h

USTRUCT()
struct FFLODInstanceID
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TWeakObjectPtr<AFLODTile> FLODTile;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RecordIndex;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InstanceIndex;  // 0x000C, size 0x4
};
