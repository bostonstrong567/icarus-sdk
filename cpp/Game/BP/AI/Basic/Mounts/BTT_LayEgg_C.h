// /Game/BP/AI/Basic/Mounts/BTT_LayEgg.BTT_LayEgg_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2B4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_LayEgg_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData EggItem;  // 0x00B0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* CharacterRef;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Container;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyCoopRadius;  // 0x02B0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_LayEgg(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
