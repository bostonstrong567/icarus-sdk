// /Game/BP/Settlement/AI/BTTask_SettlementNPC_GetNextPatrolLocation.BTTask_SettlementNPC_GetNextPatrolLocation_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x100, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_SettlementNPC_GetNextPatrolLocation_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SettlementKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ClosestIndex;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NextPointIncrement;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutwardProjectionDistance;  // 0x00FC, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_SettlementNPC_GetNextPatrolLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
