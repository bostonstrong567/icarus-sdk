// /Script/Icarus.GOAPAction
// size 0x108, declared in Icarus/Source/Icarus/AI/GOAPStructs.h

USTRUCT()
struct FGOAPAction : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Description;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPProperty> Preconditions;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPProperty> Effects;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Cost;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeOut;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TickRate;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavigationQueryFilter> DefaultNavFilterOverride;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMovementState AssociatedMovementState;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EActionRangeCheckBehaviour RangeCheckBehaviour;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UIcarusGOAPAction> ActionBP;  // 0x0060, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBehaviorTree> BehaviourTree;  // 0x0088, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAIAudioState AudioState;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> ActionStats;  // 0x00B8, size 0x50
};
