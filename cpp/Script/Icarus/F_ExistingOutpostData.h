// /Script/Icarus.ExistingOutpostData
// size 0x18, declared in Icarus/Source/Icarus/Subsystems/GameInstance/ProspectSubsystem.h

USTRUCT()
struct FExistingOutpostData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString OutpostName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EMissionDifficulty Difficulty;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SelectedDropIndex;  // 0x0014, size 0x4
};
