// /Script/Icarus.LanguagesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Languages/LanguagesLibrary.h

UCLASS()
class ULanguagesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToLanguagesTable(FName Name, FLanguagesData Data, FLanguagesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakLanguagesEnum(FLanguagesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FLanguagesRowHandle CastToLanguagesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FLanguagesEnum A, FLanguagesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FLanguagesRowHandleFLanguagesRowHandle(FLanguagesRowHandle RowHandleA, FLanguagesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetLanguagesStruct(FLanguagesRowHandle RowHandle, FLanguagesData& Languages, EValid& Paths);  // parameters 0x39
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesRowHandle MakeLanguages(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesEnum MakeLanguagesEnum(FLanguagesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesRowHandle MakeLanguagesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesRowHandle MakeLiteralLanguages(FLanguagesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FLanguagesEnum A, FLanguagesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FLanguagesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromLanguagesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesEnum RowHandleToStruct(FLanguagesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FLanguagesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FLanguagesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLanguagesRowHandle StructToRowHandle(FLanguagesEnum EnumValue);  // parameters 0x28
};
