// /Game/BP/AI/Bosses/BT/BTT_FindValidBeeTarget.BTT_FindValidBeeTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDE, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindValidBeeTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTargetDistance;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERelationshipType TargetRelationship;  // 0x00DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidFindTarget;  // 0x00DD, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_FindValidBeeTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
