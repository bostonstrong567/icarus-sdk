// /Game/BP/Settlement/AI/BTService_UpdateHeldItem.BTService_UpdateHeldItem_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTService_UpdateHeldItem_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCItemsRowHandle NewItem;  // 0x00A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCItemsRowHandle NoneItem;  // 0x00B8, size 0x18

    UFUNCTION() void ExecuteUbergraph_BTService_UpdateHeldItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
