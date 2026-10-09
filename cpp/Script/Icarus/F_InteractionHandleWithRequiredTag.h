// /Script/Icarus.InteractionHandleWithRequiredTag
// size 0x28, declared in Icarus/Source/Icarus/Traits/Behaviours/InteractableData.h

USTRUCT()
struct FInteractionHandleWithRequiredTag
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInteractionsRowHandle InteractionRow;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Tag;  // 0x0018, size 0x10
};
