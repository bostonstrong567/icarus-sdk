// /Game/BP/AI/Bosses/BT/BTTask_FindNearestSplinePath.BTTask_FindNearestSplinePath_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x158, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FindNearestSplinePath_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistanceToPawn;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Boss_Spline_Path_C* BestPath;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector PathObjectKey;  // 0x00C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector NearestSplineLocationKey;  // 0x00E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SplineKeyLocation;  // 0x0110, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector LookAtTargetLocationKey;  // 0x0120, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SplineInputKey;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeSearchLocationOffset;  // 0x014C, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTTask_FindNearestSplinePath(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
