// /Script/Icarus.DialoguePool
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DialoguePoolLibrary.generated.h

USTRUCT()
struct FDialoguePool : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRowHandle> Pool;  // 0x0018, size 0x10
};
