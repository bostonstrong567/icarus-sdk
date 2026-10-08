// /Game/BP/AI/GOAP/BehaviourTrees/BTD_HasTargetMoved.BTD_HasTargetMoved_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xE4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_HasTargetMoved_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TriggerDistance;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorOrLocation;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartingLocation;  // 0x00D8, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTD_HasTargetMoved(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTargetLocation(FVector& Out) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionStart(AActor* OwnerActor);  // parameters 0x8
};
