// /Game/BP/AI/Bosses/BT/BTTask_GetTagOrSocketLocation.BTTask_GetTagOrSocketLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x124, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_GetTagOrSocketLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SourceActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SocketOrTagName;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LocationOffset;  // 0x0108, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjectToNavigation;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectionExtent;  // 0x0118, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTTask_GetTagOrSocketLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FVector FindSocketOrTagLocation(bool& Found);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
