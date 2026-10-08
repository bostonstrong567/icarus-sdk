// /Script/Icarus.FactionInfoLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FactionInfo/FactionInfoLibrary.h

UCLASS()
class UFactionInfoLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFactionInfoTable(FName Name, FFactionInfo Data, FFactionInfoRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFactionInfoEnum(FFactionInfoEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFactionInfoRowHandle CastToFactionInfoRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFactionInfoEnum A, FFactionInfoEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFactionInfoRowHandleFFactionInfoRowHandle(FFactionInfoRowHandle RowHandleA, FFactionInfoRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFactionInfoStruct(FFactionInfoRowHandle RowHandle, FFactionInfo& FactionInfo, EValid& Paths);  // parameters 0xB1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoRowHandle MakeFactionInfo(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoEnum MakeFactionInfoEnum(FFactionInfoEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoRowHandle MakeFactionInfoFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoRowHandle MakeLiteralFactionInfo(FFactionInfoRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFactionInfoEnum A, FFactionInfoEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFactionInfoEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFactionInfoTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoEnum RowHandleToStruct(FFactionInfoRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFactionInfoEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFactionInfoEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionInfoRowHandle StructToRowHandle(FFactionInfoEnum EnumValue);  // parameters 0x28
};
