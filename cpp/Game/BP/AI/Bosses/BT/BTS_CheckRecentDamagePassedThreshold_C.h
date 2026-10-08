// /Game/BP/AI/Bosses/BT/BTS_CheckRecentDamagePassedThreshold.BTS_CheckRecentDamagePassedThreshold_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_CheckRecentDamagePassedThreshold_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector HasPassedThresholdKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LiteralThresholdValue;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PercentThresholdValue;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumHealth;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingHealth;  // 0x00D4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_CheckRecentDamagePassedThreshold(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
