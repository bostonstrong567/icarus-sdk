// /Script/Icarus.CollectableNote
// size 0x88, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CollectableNotesLibrary.generated.h

USTRUCT()
struct FCollectableNote : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableRowHandle Item;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0070, size 0x18
};
