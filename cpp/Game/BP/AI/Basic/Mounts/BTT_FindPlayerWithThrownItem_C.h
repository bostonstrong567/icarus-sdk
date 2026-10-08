// /Game/BP/AI/Basic/Mounts/BTT_FindPlayerWithThrownItem.BTT_FindPlayerWithThrownItem_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindPlayerWithThrownItem_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FoundPlayerKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* ChosenPlayer;  // 0x00E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTT_FindPlayerWithThrownItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
