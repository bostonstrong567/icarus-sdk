// /Game/BP/AI/Basic/Drone/BTS_UpdateForcedDroneTarget.BTS_UpdateForcedDroneTarget_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x120, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateForcedDroneTarget_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ForcedTargetKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector DroneStateKey;  // 0x00F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClearForcedTargetWhenNearby;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x011C, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateForcedDroneTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
