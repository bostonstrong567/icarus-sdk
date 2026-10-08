// /Script/IcarusUtilities.IcarusFeatureLevelFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/IcarusUtilities/Public/IcarusFeatureLevelFunctionLibrary.h

UCLASS()
class UIcarusFeatureLevelFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsRowHandle GetCurrentFeatureLevel();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsFeatureLevelEnabled(FFeatureLevelsRowHandle InFeatureLevel);  // parameters 0x19
};
