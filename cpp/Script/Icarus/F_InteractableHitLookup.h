// /Script/Icarus.InteractableHitLookup
// size 0x40, declared in Icarus/Source/Icarus/Characters/IcarusPlayerCharacter.h

USTRUCT()
struct FInteractableHitLookup
{
    UPROPERTY() EInteractableHitLookupType Type;  // 0x0000, size 0x1
    UPROPERTY() FReplicatedHitResult Hit;  // 0x0004, size 0x2C
    UPROPERTY() AFLODTile* Tile;  // 0x0030, size 0x8
    UPROPERTY() int32 RecordIndex;  // 0x0038, size 0x4
    UPROPERTY() int32 InstanceIndex;  // 0x003C, size 0x4
};
