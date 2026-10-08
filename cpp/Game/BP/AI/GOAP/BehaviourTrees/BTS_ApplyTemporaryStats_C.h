// /Game/BP/AI/GOAP/BehaviourTrees/BTS_ApplyTemporaryStats.BTS_ApplyTemporaryStats_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_ApplyTemporaryStats_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ActionStats;  // 0x00A8, size 0x50

    UFUNCTION() void ExecuteUbergraph_BTS_ApplyTemporaryStats(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
