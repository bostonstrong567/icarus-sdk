// /Game/BP/AI/SpawnFilters/BP_SpawnFilter_PopulationCheck.BP_SpawnFilter_PopulationCheck_C
// Derives from: UIcarusAISpawnFilter > UObject
// size 0x40, a blueprint class, blueprint

UCLASS(Abstract, Config=Engine)
class UBP_SpawnFilter_PopulationCheck_C : public UIcarusAISpawnFilter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0028, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsSpawnLocationValid(AActor* WorldContext, const FVector& InLocation, const TMap<FString, int32>& FilterParams);  // parameters 0x69
};
