// /Game/BP/AI/Bosses/BT/BTTask_SetScaledFloat.BTTask_SetScaledFloat_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_SetScaledFloat_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseValue;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector BlackboardFloatKey;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum ScalingRule;  // 0x00E0, size 0x10

    UFUNCTION() void ExecuteUbergraph_BTTask_SetScaledFloat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
