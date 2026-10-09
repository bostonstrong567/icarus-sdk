// /Script/Icarus.GOAPGoal
// size 0x68, declared in Icarus/Source/Icarus/AI/GOAPStructs.h

USTRUCT()
struct FGOAPGoal : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Description;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPState State;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Priority;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsRepeatable;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRepeatOnlyOnSuccess;  // 0x0035, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CooldownTime;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UIcarusGOAPGoal> GoalBP;  // 0x0040, size 0x28
};
