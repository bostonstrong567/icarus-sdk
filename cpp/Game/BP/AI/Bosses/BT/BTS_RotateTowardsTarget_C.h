// /Game/BP/AI/Bosses/BT/BTS_RotateTowardsTarget.BTS_RotateTowardsTarget_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_RotateTowardsTarget_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool YawOnly;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationSpeed;  // 0x00CC, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_RotateTowardsTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
