// /Script/Icarus.CharacterTimeline
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CharacterTimelineLibrary.generated.h

USTRUCT()
struct FCharacterTimeline : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Level;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0020, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTimelineRanksRowHandle> TimelineRanks;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FeatureLocked;  // 0x0058, size 0x1
};
