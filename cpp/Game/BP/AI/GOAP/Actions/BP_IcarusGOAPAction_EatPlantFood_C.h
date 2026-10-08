// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C
// Derives from: UBP_IcarusGOAPAction_Interact_Base_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xE0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_EatPlantFood_C : public UBP_IcarusGOAPAction_Interact_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ValidFoodQuery;  // 0x00A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GOAPInteractable_FoodNode_C* SpawnedFoodNode;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Array_Index;  // 0x00C0, size 0x4, named "Array Index"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* Tile;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RecordIndex;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODInstanceIndex;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ADeployable* TargetCropPlot;  // 0x00D8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetInteractLocation(AIcarusNPCGOAPController* ForController, FVector& OutLocation, bool& Success);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void LookForCropPlot(AController* Controller, float SearchRadius, TArray<ADeployable*>& CropPlots);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SpawnDummyNode(AIcarusNPCGOAPController* ForController, FVector Spawn_Transform_Location, ABP_GOAPInteractable_Base_C*& SpawnedNode);  // parameters 0x20
};
