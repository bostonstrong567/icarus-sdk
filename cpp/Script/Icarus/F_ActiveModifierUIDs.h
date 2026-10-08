// /Script/Icarus.ActiveModifierUIDs
// size 0x28, declared in Icarus/Source/Icarus/Modifiers/AuraManagerComponent.h

USTRUCT()
struct FActiveModifierUIDs
{
    UPROPERTY() FModifierStatesRowHandle ModifierRow;  // 0x0000, size 0x18
    UPROPERTY() TArray<int32> UIDs;  // 0x0018, size 0x10
};
