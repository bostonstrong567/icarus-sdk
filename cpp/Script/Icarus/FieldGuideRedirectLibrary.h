// /Script/Icarus.FieldGuideRedirectLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FieldGuideRedirect/FieldGuideRedirectLibrary.h

UCLASS()
class UFieldGuideRedirectLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFieldGuideRedirectTable(FName Name, FFieldGuideRedirectData Data, FFieldGuideRedirectRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFieldGuideRedirectEnum(FFieldGuideRedirectEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFieldGuideRedirectRowHandle CastToFieldGuideRedirectRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFieldGuideRedirectEnum A, FFieldGuideRedirectEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFieldGuideRedirectRowHandleFFieldGuideRedirectRowHandle(FFieldGuideRedirectRowHandle RowHandleA, FFieldGuideRedirectRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFieldGuideRedirectStruct(FFieldGuideRedirectRowHandle RowHandle, FFieldGuideRedirectData& FieldGuideRedirect, EValid& Paths);  // parameters 0x71
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectRowHandle MakeFieldGuideRedirect(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectEnum MakeFieldGuideRedirectEnum(FFieldGuideRedirectEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectRowHandle MakeFieldGuideRedirectFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectRowHandle MakeLiteralFieldGuideRedirect(FFieldGuideRedirectRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFieldGuideRedirectEnum A, FFieldGuideRedirectEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFieldGuideRedirectEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFieldGuideRedirectTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectEnum RowHandleToStruct(FFieldGuideRedirectRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFieldGuideRedirectEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFieldGuideRedirectEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideRedirectRowHandle StructToRowHandle(FFieldGuideRedirectEnum EnumValue);  // parameters 0x28
};
