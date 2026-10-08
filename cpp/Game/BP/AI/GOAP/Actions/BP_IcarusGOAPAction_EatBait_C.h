// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C
// Derives from: UBP_IcarusGOAPAction_Interact_Base_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xD9, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_EatBait_C : public UBP_IcarusGOAPAction_Interact_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* TargetBait;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesEnum OmnivoreBaitQuery;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesEnum CarnivoreBaitQuery;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesEnum HerbivoreBaitQuery;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEatenBait;  // 0x00D8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void EatBait(AIcarusNPCGOAPController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GOAPAnimNotify(FString NotifyName, AIcarusNPCGOAPController* Controller);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void GetInteractLocation(AIcarusNPCGOAPController* ForController, FVector& OutLocation, bool& Success);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void GetNearestRelevantBaitItem(AIcarusNPCGOAPController* ForController, bool SkipPathCheck, AIcarusItem*& BaitItem, FVector& PathEnd) const;  // parameters 0x24
};
