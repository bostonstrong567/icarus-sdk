// /Script/Icarus.LevelSequencesData
// size 0x90, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/LevelSequencesLibrary.generated.h

USTRUCT()
struct FLevelSequencesData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Level;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, ULevelSequence*> LevelSequences;  // 0x0040, size 0x50
};
