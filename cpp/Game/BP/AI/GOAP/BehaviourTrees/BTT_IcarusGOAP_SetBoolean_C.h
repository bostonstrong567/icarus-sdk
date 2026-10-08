// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGOAP_SetBoolean.BTT_IcarusGOAP_SetBoolean_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_SetBoolean_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector BooleanKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewValue;  // 0x00D8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_SetBoolean(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
