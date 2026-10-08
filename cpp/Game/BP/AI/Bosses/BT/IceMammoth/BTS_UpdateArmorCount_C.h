// /Game/BP/AI/Bosses/BT/IceMammoth/BTS_UpdateArmorCount.BTS_UpdateArmorCount_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateArmorCount_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxArmorCount;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentArmorCount;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector DisableBool;  // 0x00A8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateArmorCount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
