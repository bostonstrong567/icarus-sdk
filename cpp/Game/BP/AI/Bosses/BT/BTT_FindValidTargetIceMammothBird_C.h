// /Game/BP/AI/Bosses/BT/BTT_FindValidTargetIceMammothBird.BTT_FindValidTargetIceMammothBird_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindValidTargetIceMammothBird_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTargetDistance;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERelationshipType TargetRelationship;  // 0x00DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector MammothAttack;  // 0x00E0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_FindValidTargetIceMammothBird(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
