// /Script/Icarus.DialogueEntry
// size 0x28, declared in Icarus/Source/Icarus/AI/MissionNPCData.h

USTRUCT()
struct FDialogueEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsEnum Flag;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0010, size 0x18
};
