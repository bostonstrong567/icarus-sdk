// /Game/BP/AI/Bosses/BT/BTD_ShouldSandWormRetreatAfterDamage.BTD_ShouldSandWormRetreatAfterDamage_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_ShouldSandWormRetreatAfterDamage_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector LastForcedRetreatHealthKey;  // 0x00A8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTD_ShouldSandWormRetreatAfterDamage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
