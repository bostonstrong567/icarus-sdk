// /Script/Icarus.ValueScalingFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Scaling/ValueScalingFunctionLibrary.h

UCLASS()
class UValueScalingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static float GetScaledFloatValue(UObject* WorldContextObject, float InValue, FScalingRulesEnum ScalingRule, AActor* Target);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static int32 GetScaledIntValue(UObject* WorldContextObject, int32 InValue, FScalingRulesEnum ScalingRule, AActor* Target, EFloatRoundingMode RoundingMode);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static int32 GetScaledStat(UObject* WorldContextObject, const UIcarusStatContainer*& StatContainer, FVirtualStatsEnum Stat, FScalingRulesEnum ScalingRule, AActor* Target, EFloatRoundingMode RoundingMode);  // parameters 0x40
};
