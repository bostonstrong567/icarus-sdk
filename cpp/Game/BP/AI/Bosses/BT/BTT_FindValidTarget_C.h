// /Game/BP/AI/Bosses/BT/BTT_FindValidTarget.BTT_FindValidTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDD, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindValidTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTargetDistance;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERelationshipType TargetRelationship;  // 0x00DC, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_FindValidTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
