// /Game/BP/AI/Bosses/BT/IceMammoth/BTS_UpdateHammerSlugState.BTS_UpdateHammerSlugState_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xDC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateHammerSlugState_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentStateKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<HammerheadState> CurrentState;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<HammerheadState> NextState;  // 0x00C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<HammerheadState> DebugForceState;  // 0x00CA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* Controlled_Pawn;  // 0x00D0, size 0x8, named "Controlled Pawn"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PercentHealth;  // 0x00D8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateHammerSlugState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
