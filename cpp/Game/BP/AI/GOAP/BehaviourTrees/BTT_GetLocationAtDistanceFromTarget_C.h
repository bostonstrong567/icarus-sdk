// /Game/BP/AI/GOAP/BehaviourTrees/BTT_GetLocationAtDistanceFromTarget.BTT_GetLocationAtDistanceFromTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x12C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_GetLocationAtDistanceFromTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutLocationKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorOrLocation;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0100, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OwnerRef;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceToTarget;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjectToNavigation;  // 0x011C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectionExtent;  // 0x0120, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTT_GetLocationAtDistanceFromTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
