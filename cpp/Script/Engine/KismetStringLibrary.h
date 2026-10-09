// /Script/Engine.KismetStringLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetStringLibrary.h

UCLASS()
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Bool(FString AppendTo, FString Prefix, bool InBool, FString Suffix);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Color(FString AppendTo, FString Prefix, FLinearColor InColor, FString Suffix);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Float(FString AppendTo, FString Prefix, float InFloat, FString Suffix);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Int(FString AppendTo, FString Prefix, int32 InInt, FString Suffix);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_IntVector(FString AppendTo, FString Prefix, FIntVector InIntVector, FString Suffix);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Name(FString AppendTo, FString Prefix, FName InName, FString Suffix);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Object(FString AppendTo, FString Prefix, UObject* InObj, FString Suffix);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Rotator(FString AppendTo, FString Prefix, FRotator InRot, FString Suffix);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Vector(FString AppendTo, FString Prefix, FVector InVector, FString Suffix);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString BuildString_Vector2d(FString AppendTo, FString Prefix, FVector2D InVector2d, FString Suffix);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Concat_StrStr(FString A, FString B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Contains(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd);  // parameters 0x23
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_BoolToString(bool InBool);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_ByteToString(uint8 InByte);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_ColorToString(FLinearColor InColor);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_FloatToString(float InFloat);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_IntPointToString(FIntPoint InIntPoint);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_IntToString(int32 InInt);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_IntVectorToString(FIntVector InIntVec);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_MatrixToString(const FMatrix& InMatrix);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_NameToString(FName InName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_ObjectToString(UObject* InObj);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_RotatorToString(FRotator InRot);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Conv_StringToColor(FString InString, FLinearColor& OutConvertedColor, bool& OutIsValid);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Conv_StringToFloat(FString InString);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Conv_StringToInt(FString InString);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName Conv_StringToName(FString InString);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Conv_StringToRotator(FString InString, FRotator& OutConvertedRotator, bool& OutIsValid);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Conv_StringToVector(FString InString, FVector& OutConvertedVector, bool& OutIsValid);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Conv_StringToVector2D(FString InString, FVector2D& OutConvertedVector2D, bool& OutIsValid);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_TransformToString(const FTransform& InTrans);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_Vector2dToString(FVector2D InVec);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_VectorToString(FVector InVec);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 CullArray(FString SourceString, TArray<FString>& InArray);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EndsWith(FString SourceString, FString InSuffix, TEnumAsByte<ESearchCase> SearchCase);  // parameters 0x22
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_StrStr(FString A, FString B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_StriStri(FString A, FString B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 FindSubstring(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd, int32 StartPosition);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetCharacterArrayFromString(FString SourceString);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetCharacterAsNumber(FString SourceString, int32 Index);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetSubstring(FString SourceString, int32 StartIndex, int32 Length);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsEmpty(FString InString);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsNumeric(FString SourceString);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString JoinStringArray(const TArray<FString>& SourceArray, FString Separator);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Left(FString SourceString, int32 Count);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString LeftChop(FString SourceString, int32 Count);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString LeftPad(FString SourceString, int32 ChCount);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Len(FString S);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool MatchesWildcard(FString SourceString, FString Wildcard, TEnumAsByte<ESearchCase> SearchCase);  // parameters 0x22
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Mid(FString SourceString, int32 Start, int32 Count);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_StrStr(FString A, FString B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_StriStri(FString A, FString B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> ParseIntoArray(FString SourceString, FString Delimiter, bool CullEmptyStrings);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Replace(FString SourceString, FString From, FString To, TEnumAsByte<ESearchCase> SearchCase);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static int32 ReplaceInline(FString& SourceString, FString SearchText, FString ReplacementText, TEnumAsByte<ESearchCase> SearchCase);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Reverse(FString SourceString);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Right(FString SourceString, int32 Count);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString RightChop(FString SourceString, int32 Count);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString RightPad(FString SourceString, int32 ChCount);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Split(FString SourceString, FString InStr, FString& LeftS, FString& RightS, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir);  // parameters 0x43
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool StartsWith(FString SourceString, FString InPrefix, TEnumAsByte<ESearchCase> SearchCase);  // parameters 0x22
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString TimeSecondsToString(float InSeconds);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ToLower(FString SourceString);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ToUpper(FString SourceString);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Trim(FString SourceString);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString TrimTrailing(FString SourceString);  // parameters 0x20
};
