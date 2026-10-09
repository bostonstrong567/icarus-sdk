// /Script/Icarus.ResourceItem
// size 0x18, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/Settlement.generated.h

USTRUCT()
struct FResourceItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Type;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredUnits;  // 0x0010, size 0x4
};
