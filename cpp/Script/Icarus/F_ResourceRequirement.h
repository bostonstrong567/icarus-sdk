// /Script/Icarus.ResourceRequirement
// size 0x18, declared in Icarus/Source/Icarus/DataStructs/CraftingModifications.h

USTRUCT()
struct FResourceRequirement
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Resource;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FlowRate;  // 0x0010, size 0x4
};
