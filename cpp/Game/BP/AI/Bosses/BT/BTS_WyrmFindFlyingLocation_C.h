// /Game/BP/AI/Bosses/BT/BTS_WyrmFindFlyingLocation.BTS_WyrmFindFlyingLocation_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x11D, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_WyrmFindFlyingLocation_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FlyingAttackLocation;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OffsetDistance;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OffsetHeight;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActor;  // 0x00D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WyrmLocation;  // 0x00F8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0104, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Direction;  // 0x0110, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugSphere;  // 0x011C, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_WyrmFindFlyingLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
