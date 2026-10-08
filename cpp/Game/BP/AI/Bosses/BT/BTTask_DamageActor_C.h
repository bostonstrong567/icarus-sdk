// /Game/BP/AI/Bosses/BT/BTTask_DamageActor.BTTask_DamageActor_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDD, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_DamageActor_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageAmount;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x00DC, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_DamageActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
