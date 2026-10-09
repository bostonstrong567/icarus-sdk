// /Game/BP/MiscConstructs/BP_SentryFunctionLibrary.BP_SentryFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SentryFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void CaptureCustomSentryReport(FString UserDescription, ESentryLevel Level, TMap<FString, FString> CustomTags, UObject* __WorldContext);  // parameters 0x70
};
