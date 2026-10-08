// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_DrinkFromContainer.BP_IcarusGOAPAction_DrinkFromContainer_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_DrinkFromContainer_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ValidFoodQuery;  // 0x0080, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GOAPInteractable_FoodNode_C* SpawnedFoodNode;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Array_Index;  // 0x00A0, size 0x4, named "Array Index"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* Tile;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RecordIndex;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODInstanceIndex;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GOAP_Corpse_C* TargetCorpse;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxEatAmount;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsEating;  // 0x00C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle EatTimer;  // 0x00C8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Execute(AIcarusNPCGOAPController* Controller, float Delta);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
