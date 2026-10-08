// /Game/BP/AI/Bosses/BT/BTS_SetBoolean.BTS_SetBoolean_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_SetBoolean_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector BooleanBlackboardKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ActiveState;  // 0x00C8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_SetBoolean(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
