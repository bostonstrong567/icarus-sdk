// /Game/BP/Settlement/AI/BTTask_FindNearbyFLODInstance.BTTask_FindNearbyFLODInstance_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1B0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FindNearbyFLODInstance_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery FoliageTagFilter;  // 0x00B0, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutLocationKey;  // 0x00F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyRadius;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SaveFLODTarget;  // 0x0124, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TileKey;  // 0x0128, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector RecordKey;  // 0x0150, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector InstanceKey;  // 0x0178, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjectToNavigation;  // 0x01A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectionExtent;  // 0x01A4, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTTask_FindNearbyFLODInstance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
