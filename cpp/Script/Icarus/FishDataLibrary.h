// /Script/Icarus.FishDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FishData/FishDataLibrary.h

UCLASS()
class UFishDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFishDataTable(FName Name, FFishData Data, FFishDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x101
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFishDataEnum(FFishDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFishDataRowHandle CastToFishDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFishDataEnum A, FFishDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFishDataRowHandleFFishDataRowHandle(FFishDataRowHandle RowHandleA, FFishDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFishDataStruct(FFishDataRowHandle RowHandle, FFishData& FishData, EValid& Paths);  // parameters 0xF9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataRowHandle MakeFishData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataEnum MakeFishDataEnum(FFishDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataRowHandle MakeFishDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataRowHandle MakeLiteralFishData(FFishDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFishDataEnum A, FFishDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFishDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFishDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataEnum RowHandleToStruct(FFishDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFishDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFishDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishDataRowHandle StructToRowHandle(FFishDataEnum EnumValue);  // parameters 0x28
};
