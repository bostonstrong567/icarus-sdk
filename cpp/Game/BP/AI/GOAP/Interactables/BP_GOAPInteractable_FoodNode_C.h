// /Game/BP/AI/GOAP/Interactables/BP_GOAPInteractable_FoodNode.BP_GOAPInteractable_FoodNode_C
// Derives from: ABP_GOAPInteractable_Base_C > AIcarusActor > AActor > UObject
// size 0x318, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GOAPInteractable_FoodNode_C : public ABP_GOAPInteractable_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODInstanceIndex;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* FLODTile;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODRecordInstance;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ADeployable* CropPlot;  // 0x0310, size 0x8

    UFUNCTION(BlueprintCallable) void OnInteractionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x8
};
