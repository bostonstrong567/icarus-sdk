// /Game/BP/AI/Missions/BTTask_SetVector.BTTask_SetVector_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE5, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_SetVector_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector VectorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Value;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldAdd;  // 0x00E4, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_SetVector(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
