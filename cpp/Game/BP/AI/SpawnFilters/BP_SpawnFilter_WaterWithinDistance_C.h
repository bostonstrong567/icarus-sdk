// /Game/BP/AI/SpawnFilters/BP_SpawnFilter_WaterWithinDistance.BP_SpawnFilter_WaterWithinDistance_C
// Derives from: UIcarusAISpawnFilter > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SpawnFilter_WaterWithinDistance_C : public UIcarusAISpawnFilter
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsSpawnLocationValid(AActor* WorldContext, const FVector& InLocation, const TMap<FString, int32>& FilterParams);  // parameters 0x69
};
