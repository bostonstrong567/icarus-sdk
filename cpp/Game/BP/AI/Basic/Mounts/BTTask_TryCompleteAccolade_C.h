// /Game/BP/AI/Basic/Mounts/BTTask_TryCompleteAccolade.BTTask_TryCompleteAccolade_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_TryCompleteAccolade_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector PlayerCharacterKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccoladesRowHandle Accolade;  // 0x00D8, size 0x18

    UFUNCTION() void ExecuteUbergraph_BTTask_TryCompleteAccolade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
