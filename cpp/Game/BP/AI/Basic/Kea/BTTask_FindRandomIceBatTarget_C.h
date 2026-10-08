// /Game/BP/AI/Basic/Kea/BTTask_FindRandomIceBatTarget.BTTask_FindRandomIceBatTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FindRandomIceBatTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTravelDistance;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActor;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector MammothAttack;  // 0x00E0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTTask_FindRandomIceBatTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
