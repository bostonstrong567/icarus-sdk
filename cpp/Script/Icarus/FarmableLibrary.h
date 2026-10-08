// /Script/Icarus.FarmableLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Farmable/FarmableLibrary.h

UCLASS()
class UFarmableLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFarmableTable(FName Name, FFarmableData Data, FFarmableRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFarmableEnum(FFarmableEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFarmableRowHandle CastToFarmableRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFarmableEnum A, FFarmableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFarmableRowHandleFFarmableRowHandle(FFarmableRowHandle RowHandleA, FFarmableRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFarmableStruct(FFarmableRowHandle RowHandle, FFarmableData& Farmable, EValid& Paths);  // parameters 0x49
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableRowHandle MakeFarmable(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableEnum MakeFarmableEnum(FFarmableEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableRowHandle MakeFarmableFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableRowHandle MakeLiteralFarmable(FFarmableRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFarmableEnum A, FFarmableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFarmableEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFarmableTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableEnum RowHandleToStruct(FFarmableRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFarmableEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFarmableEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmableRowHandle StructToRowHandle(FFarmableEnum EnumValue);  // parameters 0x28
};
