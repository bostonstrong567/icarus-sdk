// /Script/Icarus.BestiaryDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BestiaryData/BestiaryDataLibrary.h

UCLASS()
class UBestiaryDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToBestiaryDataTable(FName Name, FBestiaryData Data, FBestiaryDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBestiaryDataEnum(FBestiaryDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBestiaryDataRowHandle CastToBestiaryDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBestiaryDataEnum A, FBestiaryDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBestiaryDataRowHandleFBestiaryDataRowHandle(FBestiaryDataRowHandle RowHandleA, FBestiaryDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBestiaryDataStruct(FBestiaryDataRowHandle RowHandle, FBestiaryData& BestiaryData, EValid& Paths);  // parameters 0x1F1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataRowHandle MakeBestiaryData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataEnum MakeBestiaryDataEnum(FBestiaryDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataRowHandle MakeBestiaryDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataRowHandle MakeLiteralBestiaryData(FBestiaryDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBestiaryDataEnum A, FBestiaryDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBestiaryDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBestiaryDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataEnum RowHandleToStruct(FBestiaryDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBestiaryDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBestiaryDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryDataRowHandle StructToRowHandle(FBestiaryDataEnum EnumValue);  // parameters 0x28
};
