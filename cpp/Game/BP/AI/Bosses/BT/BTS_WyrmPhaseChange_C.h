// /Game/BP/AI/Bosses/BT/BTS_WyrmPhaseChange.BTS_WyrmPhaseChange_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_WyrmPhaseChange_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentPhaseKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FirstPhaseHealthPercentChange;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondPhaseTimeChange;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ElapsedTime;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CacheCurrentHealthPercent;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThirdPhaseHealthPercentChange;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FirstPhase;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector IsPlayingAnimation;  // 0x00E0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTS_WyrmPhaseChange(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void ResetDoOnce();
};
