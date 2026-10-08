// /Game/BP/AI/Basic/Kea/BTT_FindNearbyFoliage.BTT_FindNearbyFoliage_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1A0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindNearbyFoliage_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAIController* Controller;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* Tile;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFLODFISMComponent* CurrentFISM;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RecordIndex;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ValidFoodQuery;  // 0x00CC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SearchRadius;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> NearbyInstances;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODInstanceIndex;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequireReachable;  // 0x00FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetTileKey;  // 0x0100, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetInstanceKey;  // 0x0128, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetRecordKey;  // 0x0150, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x0178, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_FindNearbyFoliage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNearestFoliage(bool& Success);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
