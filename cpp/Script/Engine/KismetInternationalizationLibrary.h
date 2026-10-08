// /Script/Engine.KismetInternationalizationLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetInternationalizationLibrary.h

UCLASS()
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void ClearCurrentAssetGroupCulture(FName AssetGroup, bool SaveToConfig);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetCultureDisplayName(FString Culture, bool Localized);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetCurrentAssetGroupCulture(FName AssetGroup);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetCurrentCulture();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetCurrentLanguage();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetCurrentLocale();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetNativeCulture(ELocalizedTextSourceCategory TextCategory);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetSuitableCulture(const TArray<FString>& AvailableCultures, FString CultureToMatch, FString FallbackCulture);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static bool SetCurrentAssetGroupCulture(FName AssetGroup, FString Culture, bool SaveToConfig);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) static bool SetCurrentCulture(FString Culture, bool SaveToConfig);  // parameters 0x12
    UFUNCTION(BlueprintCallable) static bool SetCurrentLanguage(FString Culture, bool SaveToConfig);  // parameters 0x12
    UFUNCTION(BlueprintCallable) static bool SetCurrentLanguageAndLocale(FString Culture, bool SaveToConfig);  // parameters 0x12
    UFUNCTION(BlueprintCallable) static bool SetCurrentLocale(FString Culture, bool SaveToConfig);  // parameters 0x12
};
