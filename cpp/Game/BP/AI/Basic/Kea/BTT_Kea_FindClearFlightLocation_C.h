// /Game/BP/AI/Basic/Kea/BTT_Kea_FindClearFlightLocation.BTT_Kea_FindClearFlightLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x10C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_Kea_FindClearFlightLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* FloorActor;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetLocationDistance;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CapsuleRadius;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CapsuleHeight;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastTargetLocation;  // 0x00CC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetPitch;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetHeight;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetHeightRandomDeviation;  // 0x0108, size 0x4

    UFUNCTION(BlueprintCallable) void BreakLoop();
    UFUNCTION() void ExecuteUbergraph_BTT_Kea_FindClearFlightLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
