// /Script/IcarusUtilities.IcarusStringFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/IcarusUtilities/Public/IcarusStringFunctionLibrary.h

UCLASS()
class UIcarusStringFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FastLess_Name(const FName& NameA, const FName& NameB);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LexicalLess_Name(const FName& NameA, const FName& NameB);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LexicalLess_String(FString StringA, FString StringB);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LexicalLess_Text(const FText& TextA, const FText& TextB);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> ParseIntoLines(FString MultiLineInput);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool StringContainsSpecialCharacters(FString String);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool StringContainsSpecialCharacters_Output(FString String, TArray<FString>& OutSpecialCharacters);  // parameters 0x21
};
