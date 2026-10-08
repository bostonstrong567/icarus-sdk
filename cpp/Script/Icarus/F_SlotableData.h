// /Script/Icarus.SlotableData
// size 0x50, declared in Icarus/Source/Icarus/Traits/Behaviours/SlotableData.h

USTRUCT()
struct FSlotableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<USlotableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSocketStringIDQuery> StringIDQueries;  // 0x0040, size 0x10
};
