// /Script/UMG.NamedSlotBinding
// size 0x10, declared in Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h

USTRUCT()
struct FNamedSlotBinding
{
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY(Instanced) UWidget* Content;  // 0x0008, size 0x8
};
