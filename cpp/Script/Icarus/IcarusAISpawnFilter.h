// /Script/Icarus.IcarusAISpawnFilter
// Derives from: UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/IcarusAISpawnFilter.h

UCLASS(Abstract)
class UIcarusAISpawnFilter : public UObject
{
public:

    UFUNCTION(BlueprintNativeEvent) bool IsSpawnLocationValid(AActor* WorldContext, const FVector& InLocation, const TMap<FString, int32>& FilterParams);  // parameters 0x69

    // Virtual functions that start here:
    //   IsSpawnLocationValid_Implementation
};
