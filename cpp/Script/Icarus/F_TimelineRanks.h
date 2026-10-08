// /Script/Icarus.TimelineRanks
// size 0x70, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TimelineRanksLibrary.generated.h

USTRUCT()
struct FTimelineRanks : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TitleText;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TooltipText;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0048, size 0x28
};
