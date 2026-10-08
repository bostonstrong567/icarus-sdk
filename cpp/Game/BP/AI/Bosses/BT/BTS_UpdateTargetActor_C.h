// /Game/BP/AI/Bosses/BT/BTS_UpdateTargetActor.BTS_UpdateTargetActor_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateTargetActor_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_Distance;  // 0x00A0, size 0x4, named "Max Distance"

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateTargetActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
