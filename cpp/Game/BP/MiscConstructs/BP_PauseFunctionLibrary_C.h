// /Game/BP/MiscConstructs/BP_PauseFunctionLibrary.BP_PauseFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PauseFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void SetAudioPaused(bool bPaused, UObject* __WorldContext);  // parameters 0x10
};
