// /Game/BP/AI/Basic/Kea/BTT_FindClearLandingLocation.BTT_FindClearLandingLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindClearLandingLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CapsuleRadius;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CapsuleHeight;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Succeeded;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastTargetLocation;  // 0x00C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectedGroundLocation;  // 0x00F8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LandingDistance;  // 0x0104, size 0x4

    UFUNCTION(BlueprintCallable) void BreakLoop();
    UFUNCTION() void ExecuteUbergraph_BTT_FindClearLandingLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
