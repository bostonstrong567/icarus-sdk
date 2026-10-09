// /Script/Icarus.GOAPSetup
// size 0xC0, declared in Icarus/Source/Icarus/IcarusGenerated/GOAPSetup/GOAPSetupRowHandle.h

USTRUCT()
struct FGOAPSetup : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPMotivationsRowHandle> Motivations;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPActionsRowHandle> Actions;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPGoalsRowHandle> Goals;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPGoalsRowHandle DefaultGoal;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPState DefaultState;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGameplayTag, UBehaviorTree*> DynamicSubtreeOverrides;  // 0x0070, size 0x50
};
