// /Script/Icarus.FactionInfo
// size 0x98, declared in Icarus/Source/Icarus/IcarusGenerated/FactionInfo/FactionInfoRowHandle.h

USTRUCT()
struct FFactionInfo : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Icon;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText FactionName;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle BriefingPool;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle LandingPool;  // 0x0068, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle MissionCompletePool;  // 0x0080, size 0x18
};
