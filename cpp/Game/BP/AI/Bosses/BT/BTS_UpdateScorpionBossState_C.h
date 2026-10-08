// /Game/BP/AI/Bosses/BT/BTS_UpdateScorpionBossState.BTS_UpdateScorpionBossState_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateScorpionBossState_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentHealthPercent;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentStateKey;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ScorpionBossState> CurrentState;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ScorpionBossState> NextState;  // 0x00D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TransitionInitialHealth;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ScorpionBossState> DebugForceState;  // 0x00D8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateScorpionBossState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
