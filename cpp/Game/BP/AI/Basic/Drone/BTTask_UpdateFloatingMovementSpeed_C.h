// /Game/BP/AI/Basic/Drone/BTTask_UpdateFloatingMovementSpeed.BTTask_UpdateFloatingMovementSpeed_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xC0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_UpdateFloatingMovementSpeed_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_Speed;  // 0x00B0, size 0x4, named "Max Speed"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Acceleration;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Deceleration;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Turning_Boost;  // 0x00BC, size 0x4, named "Turning Boost"

    UFUNCTION() void ExecuteUbergraph_BTTask_UpdateFloatingMovementSpeed(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
