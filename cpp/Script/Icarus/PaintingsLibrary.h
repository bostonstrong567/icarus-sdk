// /Script/Icarus.PaintingsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Paintings/PaintingsLibrary.h

UCLASS()
class UPaintingsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToPaintingsTable(FName Name, FPaintingData Data, FPaintingsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPaintingsEnum(FPaintingsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPaintingsRowHandle CastToPaintingsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPaintingsEnum A, FPaintingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPaintingsRowHandleFPaintingsRowHandle(FPaintingsRowHandle RowHandleA, FPaintingsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPaintingsStruct(FPaintingsRowHandle RowHandle, FPaintingData& Paintings, EValid& Paths);  // parameters 0xB1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsRowHandle MakeLiteralPaintings(FPaintingsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsRowHandle MakePaintings(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsEnum MakePaintingsEnum(FPaintingsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsRowHandle MakePaintingsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPaintingsEnum A, FPaintingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPaintingsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPaintingsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsEnum RowHandleToStruct(FPaintingsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPaintingsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPaintingsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaintingsRowHandle StructToRowHandle(FPaintingsEnum EnumValue);  // parameters 0x28
};
