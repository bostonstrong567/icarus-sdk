// /Script/Icarus.MapSearchAreaLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/MapSearchArea/MapSearchAreaLibrary.h

UCLASS()
class UMapSearchAreaLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToMapSearchAreaTable(FName Name, FMapSearchArea Data, FMapSearchAreaRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMapSearchAreaEnum(FMapSearchAreaEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMapSearchAreaRowHandle CastToMapSearchAreaRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMapSearchAreaEnum A, FMapSearchAreaEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMapSearchAreaRowHandleFMapSearchAreaRowHandle(FMapSearchAreaRowHandle RowHandleA, FMapSearchAreaRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMapSearchAreaStruct(FMapSearchAreaRowHandle RowHandle, FMapSearchArea& MapSearchArea, EValid& Paths);  // parameters 0x69
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaRowHandle MakeLiteralMapSearchArea(FMapSearchAreaRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaRowHandle MakeMapSearchArea(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaEnum MakeMapSearchAreaEnum(FMapSearchAreaEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaRowHandle MakeMapSearchAreaFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMapSearchAreaEnum A, FMapSearchAreaEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMapSearchAreaEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMapSearchAreaTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaEnum RowHandleToStruct(FMapSearchAreaRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMapSearchAreaEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMapSearchAreaEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMapSearchAreaRowHandle StructToRowHandle(FMapSearchAreaEnum EnumValue);  // parameters 0x28
};
