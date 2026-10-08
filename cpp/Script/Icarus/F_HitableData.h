// /Script/Icarus.HitableData
// size 0x40, declared in Icarus/Source/Icarus/Traits/Behaviours/HitableData.h

USTRUCT()
struct FHitableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UHitableComponent> Behaviour;  // 0x0018, size 0x28
};
