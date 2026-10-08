// /Game/BP/AI/Basic/Kea/BTTask_CircleFlight.BTTask_CircleFlight_C
// Derives from: UBTTask_RandomFlight_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1C8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_CircleFlight_C : public UBTTask_RandomFlight_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0188, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector AroundTarget;  // 0x0190, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredCircleRadius;  // 0x01B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredCircleRadiusDeviation;  // 0x01BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredRadius;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PerimeterDistanceTurnStrength;  // 0x01C4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_CircleFlight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetNextMoveInput(float DeltaSeconds, FVector& DesiredMoveInput);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
