// /Game/BP/AI/Bosses/BT/BTTask_AddCharacterHalfHeight.BTTask_AddCharacterHalfHeight_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_AddCharacterHalfHeight_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetVectorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetVector;  // 0x00D8, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTTask_AddCharacterHalfHeight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
