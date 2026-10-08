// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x78, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Enraged_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CombatSecondsUntilMaximum;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaChange;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BlockScoreIncrease;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultCooldownTime;  // 0x0074, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_IcarusGOAPMotivation_Enraged(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnMotivationTriggerEvent(AIcarusNPCGOAPController* Controller, const FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered);  // parameters 0x71
    UFUNCTION(BlueprintCallable) void UnblockIncrease();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
