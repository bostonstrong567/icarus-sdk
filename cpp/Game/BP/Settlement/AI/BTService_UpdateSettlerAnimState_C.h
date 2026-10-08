// /Game/BP/Settlement/AI/BTService_UpdateSettlerAnimState.BTService_UpdateSettlerAnimState_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xCA, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTService_UpdateSettlerAnimState_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector AnimStateKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SettlementNPC_AnimState> DesiredAnimState;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SettlementNPC_AnimState> FallbackDefaultAnimState;  // 0x00C9, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTService_UpdateSettlerAnimState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
