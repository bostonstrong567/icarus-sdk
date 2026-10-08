// /Game/BP/AI/Basic/Kea/BTTask_CacheActorTargetLocation.BTTask_CacheActorTargetLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x128, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_CacheActorTargetLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AdjustForTargetVelocity;  // 0x0100, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocationOffset;  // 0x0104, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeAheadAdjustment;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ManualTargetOffset;  // 0x0114, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetHeightKeyName;  // 0x0120, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTTask_CacheActorTargetLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
