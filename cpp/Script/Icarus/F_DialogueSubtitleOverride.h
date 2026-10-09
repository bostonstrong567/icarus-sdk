// /Script/Icarus.DialogueSubtitleOverride
// size 0x30, declared in Icarus/Source/Icarus/Systems/Dialogue/Dialogue.h

USTRUCT()
struct FDialogueSubtitleOverride
{
public:
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) FString ReferenceText;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverrideLength;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueSpeakerRowHandle SpeakerOverride;  // 0x0014, size 0x18
};
