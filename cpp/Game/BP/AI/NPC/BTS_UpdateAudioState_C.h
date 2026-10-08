// /Game/BP/AI/NPC/BTS_UpdateAudioState.BTS_UpdateAudioState_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA3, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateAudioState_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAIAudioState DesiredEntryState;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SetStateOnExit;  // 0x00A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAIAudioState DesiredExitState;  // 0x00A2, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateAudioState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
