// /Script/Icarus.Dialogue
// size 0xE0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DialogueLibrary.generated.h

USTRUCT()
struct FDialogue : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EDialogueRedirectCondition, FDialogueRowHandle> Redirects;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> Audio;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float AudioLength;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delay;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Priority;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueSpeakerRowHandle Speaker;  // 0x009C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> Text;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseSubtitleOverrides;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueSubtitleOverride> SubtitleOverrides;  // 0x00D0, size 0x10
};
