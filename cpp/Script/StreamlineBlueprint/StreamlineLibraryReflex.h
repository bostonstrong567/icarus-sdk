// /Script/StreamlineBlueprint.StreamlineLibraryReflex
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/Nvidia/Streamline/Source/StreamlineBlueprint/Public/StreamlineLibraryReflex.h

UCLASS(MinimalAPI)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static UStreamlineReflexMode GetDefaultReflexMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetGameLatencyInMs();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetGameToRenderLatencyInMs();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static UStreamlineReflexMode GetReflexMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetRenderLatencyInMs();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsReflexSupported();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static UStreamlineReflexSupport QueryReflexSupport();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetReflexMode(UStreamlineReflexMode Mode);  // parameters 0x1
};
