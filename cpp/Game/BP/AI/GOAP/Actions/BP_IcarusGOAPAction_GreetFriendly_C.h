// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x84, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_GreetFriendly_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxGreetDistance;  // 0x0080, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetNearbyTargetToGreet(AActor*& ValidTarget) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void IsTargetValid(AActor* Target, bool& IsValid) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
