// /Game/BP/AI/Basic/Kea/BTTask_FindRandomFlightTarget.BTTask_FindRandomFlightTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FindRandomFlightTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PreferBehind;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTravelDistance;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredTargetHeight;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OptionalTargetHeightKeyName;  // 0x00F0, size 0x8

    UFUNCTION(BlueprintCallable) void AdjustForDesiredTargetHeight(FVector RandomTargetDirection, FVector& AdjustedDirection);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_BTTask_FindRandomFlightTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindFreeFlightTarget(AActor* Target, FVector& TargetLocation, bool& WasSuccessful);  // parameters 0x15
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
