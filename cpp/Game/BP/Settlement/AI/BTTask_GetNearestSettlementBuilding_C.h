// /Game/BP/Settlement/AI/BTTask_GetNearestSettlementBuilding.BTTask_GetNearestSettlementBuilding_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x183, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_GetNearestSettlementBuilding_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SettlementKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery BuildingType;  // 0x00D8, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActor;  // 0x0120, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x0148, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ASettlementBuilding*> MatchingBuilding;  // 0x0170, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FindRandom;  // 0x0180, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FallbackToSettlementHub;  // 0x0181, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjectLocationToNavigation;  // 0x0182, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_GetNearestSettlementBuilding(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFail();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
