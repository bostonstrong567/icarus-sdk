// /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Public/SynthesisBlueprintUtilities.h

UCLASS()
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);  // parameters 0x18
};
