// /Script/Icarus.BestiaryPointsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BestiaryPoints/BestiaryPointsLibrary.h

UCLASS()
class UBestiaryPointsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToBestiaryPointsTable(FName Name, FBestiaryPoints Data, FBestiaryPointsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBestiaryPointsEnum(FBestiaryPointsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBestiaryPointsRowHandle CastToBestiaryPointsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBestiaryPointsEnum A, FBestiaryPointsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBestiaryPointsRowHandleFBestiaryPointsRowHandle(FBestiaryPointsRowHandle RowHandleA, FBestiaryPointsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBestiaryPointsStruct(FBestiaryPointsRowHandle RowHandle, FBestiaryPoints& BestiaryPoints, EValid& Paths);  // parameters 0x39
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsRowHandle MakeBestiaryPoints(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsEnum MakeBestiaryPointsEnum(FBestiaryPointsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsRowHandle MakeBestiaryPointsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsRowHandle MakeLiteralBestiaryPoints(FBestiaryPointsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBestiaryPointsEnum A, FBestiaryPointsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBestiaryPointsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBestiaryPointsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsEnum RowHandleToStruct(FBestiaryPointsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBestiaryPointsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBestiaryPointsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryPointsRowHandle StructToRowHandle(FBestiaryPointsEnum EnumValue);  // parameters 0x28
};
