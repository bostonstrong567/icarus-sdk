// /Game/BP/AI/GOAP/BehaviourTrees/BTT_CopyBlackboardBoolKey.BTT_CopyBlackboardBoolKey_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x101, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_CopyBlackboardBoolKey_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector Source;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector Target;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Inverse;  // 0x0100, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_CopyBlackboardBoolKey(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
