// /Script/Icarus.MapIconsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/MapIcons/MapIconsLibrary.h

UCLASS()
class UMapIconsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToMapIconsTable(FName Name, FMapIconsData Data, FMapIconsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMapIconsEnum(FMapIconsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMapIconsRowHandle CastToMapIconsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMapIconsEnum A, FMapIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMapIconsRowHandleFMapIconsRowHandle(FMapIconsRowHandle RowHandleA, FMapIconsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMapIconsStruct(FMapIconsRowHandle RowHandle, FMapIconsData& MapIcons, EValid& Paths);  // parameters 0xD1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsRowHandle MakeLiteralMapIcons(FMapIconsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsRowHandle MakeMapIcons(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsEnum MakeMapIconsEnum(FMapIconsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsRowHandle MakeMapIconsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMapIconsEnum A, FMapIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMapIconsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMapIconsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsEnum RowHandleToStruct(FMapIconsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMapIconsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMapIconsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapIconsRowHandle StructToRowHandle(FMapIconsEnum EnumValue);  // parameters 0x28
};
