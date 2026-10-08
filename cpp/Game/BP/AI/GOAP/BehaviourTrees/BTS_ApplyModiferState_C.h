// /Game/BP/AI/GOAP/BehaviourTrees/BTS_ApplyModiferState.BTS_ApplyModiferState_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_ApplyModiferState_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierUID;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x00A4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Modifier_Lifetime;  // 0x00BC, size 0x4, named "Modifier Lifetime"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Modifier_Effectiveness;  // 0x00C0, size 0x4, named "Modifier Effectiveness"

    UFUNCTION() void ExecuteUbergraph_BTS_ApplyModiferState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
