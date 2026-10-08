// /Game/BP/AI/Basic/Mounts/BTT_ProduceMilk.BTT_ProduceMilk_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xC0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_ProduceMilk_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* CharacterRef;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Container;  // 0x00B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTT_ProduceMilk(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
