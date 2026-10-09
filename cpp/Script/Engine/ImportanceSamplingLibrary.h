// /Script/Engine.ImportanceSamplingLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/ImportanceSamplingLibrary.h

UCLASS(MinimalAPI)
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakImportanceTexture(const FImportanceTexture& ImportanceTexture, UTexture2D*& Texture, TEnumAsByte<EImportanceWeight>& WeightingFunc);  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) static void ImportanceSample(const FImportanceTexture& Texture, const FVector2D& Rand, int32 Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) static FImportanceTexture MakeImportanceTexture(UTexture2D* Texture, TEnumAsByte<EImportanceWeight> WeightingFunc);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D NextSobolCell2D(int32 Index, int32 NumCells, FVector2D PreviousValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector NextSobolCell3D(int32 Index, int32 NumCells, FVector PreviousValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static float NextSobolFloat(int32 Index, int32 Dimension, float PreviousValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D RandomSobolCell2D(int32 Index, int32 NumCells, FVector2D Cell, FVector2D Seed);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomSobolCell3D(int32 Index, int32 NumCells, FVector Cell, FVector Seed);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float RandomSobolFloat(int32 Index, int32 Dimension, float Seed);  // parameters 0x10
};
