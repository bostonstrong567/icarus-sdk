// /Game/BP/AI/GOAP/BehaviourTrees/BTT_CopyActorLocationToVectorKey.BTT_CopyActorLocationToVectorKey_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x10C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_CopyActorLocationToVectorKey_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SourceActor;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetVector;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OffsetToApply;  // 0x0100, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTT_CopyActorLocationToVectorKey(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
