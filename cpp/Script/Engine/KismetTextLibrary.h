// /Script/Engine.KismetTextLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetTextLibrary.h

UCLASS()
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsCurrencyBase(int32 BaseValue, FString CurrencyCode);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, FString CurrencyCode);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsCurrency_Integer(int32 Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, FString CurrencyCode);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsDateTime_DateTime(const FDateTime& In);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsDate_DateTime(const FDateTime& InDateTime);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsTimeZoneDateTime_DateTime(const FDateTime& InDateTime, FString InTimeZone);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsTimeZoneDate_DateTime(const FDateTime& InDateTime, FString InTimeZone);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsTimeZoneTime_DateTime(const FDateTime& InDateTime, FString InTimeZone);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsTime_DateTime(const FDateTime& In);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText AsTimespan_Timespan(const FTimespan& InTimespan);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_BoolToText(bool InBool);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_ByteToText(uint8 Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_ColorToText(FLinearColor InColor);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_IntToText(int32 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_NameToText(FName InName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_ObjectToText(UObject* InObj);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_RotatorToText(FRotator InRot);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_StringToText(FString InString);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_TextToString(const FText& InText);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_TransformToText(const FTransform& InTrans);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_Vector2dToText(FVector2D InVec);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Conv_VectorToText(FVector InVec);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_IgnoreCase_TextText(const FText& A, const FText& B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_TextText(const FText& A, const FText& B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindTextInLocalizationTable(FString Namespace, FString Key, FText& OutText);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText Format(FText InPattern, TArray<FFormatArgumentData> InArgs);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText GetEmptyText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsPolyglotDataValid(const FPolyglotTextData& PolyglotData, bool& IsValid, FText& ErrorMessage);  // parameters 0xD8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_IgnoreCase_TextText(const FText& A, const FText& B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_TextText(const FText& A, const FText& B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText PolyglotDataToText(const FPolyglotTextData& PolyglotData);  // parameters 0xD0
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool StringTableIdAndKeyFromText(FText Text, FName& OutTableId, FString& OutKey);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText TextFromStringTable(FName TableId, FString Key);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool TextIsCultureInvariant(const FText& InText);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool TextIsEmpty(const FText& InText);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool TextIsFromStringTable(const FText& Text);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool TextIsTransient(const FText& InText);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText TextToLower(const FText& InText);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText TextToUpper(const FText& InText);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText TextTrimPreceding(const FText& InText);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText TextTrimPrecedingAndTrailing(const FText& InText);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText TextTrimTrailing(const FText& InText);  // parameters 0x30
};
