// /Script/Icarus.FillableData
// size 0x58, declared in Icarus/Source/Icarus/Traits/Behaviours/FillableData.h

USTRUCT()
struct FFillableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UFillableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusResourcesEnum> ResourceTypes;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumStoredUnits;  // 0x0050, size 0x4
};
