// /Game/BP/Settlement/AI/BTService_SettlementNPC_Hide.BTService_SettlementNPC_Hide_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTService_SettlementNPC_Hide_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTService_SettlementNPC_Hide(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
