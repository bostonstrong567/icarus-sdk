// /Script/Icarus.AlterationsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Alterations/AlterationsLibrary.h

UCLASS()
class UAlterationsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAlterationsTable(FName Name, FAlteration Data, FAlterationsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x109
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAlterationsEnum(FAlterationsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAlterationsRowHandle CastToAlterationsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAlterationsEnum A, FAlterationsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAlterationsRowHandleFAlterationsRowHandle(FAlterationsRowHandle RowHandleA, FAlterationsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAlterationsStruct(FAlterationsRowHandle RowHandle, FAlteration& Alterations, EValid& Paths);  // parameters 0x101
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsRowHandle MakeAlterations(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsEnum MakeAlterationsEnum(FAlterationsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsRowHandle MakeAlterationsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsRowHandle MakeLiteralAlterations(FAlterationsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAlterationsEnum A, FAlterationsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAlterationsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAlterationsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsEnum RowHandleToStruct(FAlterationsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAlterationsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAlterationsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationsRowHandle StructToRowHandle(FAlterationsEnum EnumValue);  // parameters 0x28
};
