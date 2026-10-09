// /Script/Icarus.MissionNPCData
// size 0x70, declared in Icarus/Source/Icarus/IcarusGenerated/MissionNPC/MissionNPCRowHandle.h

USTRUCT()
struct FMissionNPCData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHighlightableRowHandle Highlightable;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueSpeakerRowHandle Speaker;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueEntry> Dialogue;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle Fallback;  // 0x0058, size 0x18
};
