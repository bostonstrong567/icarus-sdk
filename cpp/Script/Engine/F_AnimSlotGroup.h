// /Script/Engine.AnimSlotGroup
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

USTRUCT()
struct FAnimSlotGroup
{
    UPROPERTY() FName GroupName;  // 0x0000, size 0x8
    UPROPERTY() TArray<FName> SlotNames;  // 0x0008, size 0x10
};
