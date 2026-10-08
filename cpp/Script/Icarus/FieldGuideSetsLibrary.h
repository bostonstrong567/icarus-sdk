// /Script/Icarus.FieldGuideSetsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FieldGuideSets/FieldGuideSetsLibrary.h

UCLASS()
class UFieldGuideSetsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFieldGuideSetsTable(FName Name, FFieldGuideSets Data, FFieldGuideSetsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFieldGuideSetsEnum(FFieldGuideSetsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFieldGuideSetsRowHandle CastToFieldGuideSetsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFieldGuideSetsEnum A, FFieldGuideSetsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFieldGuideSetsRowHandleFFieldGuideSetsRowHandle(FFieldGuideSetsRowHandle RowHandleA, FFieldGuideSetsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFieldGuideSetsStruct(FFieldGuideSetsRowHandle RowHandle, FFieldGuideSets& FieldGuideSets, EValid& Paths);  // parameters 0x41
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsRowHandle MakeFieldGuideSets(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsEnum MakeFieldGuideSetsEnum(FFieldGuideSetsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsRowHandle MakeFieldGuideSetsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsRowHandle MakeLiteralFieldGuideSets(FFieldGuideSetsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFieldGuideSetsEnum A, FFieldGuideSetsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFieldGuideSetsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFieldGuideSetsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsEnum RowHandleToStruct(FFieldGuideSetsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFieldGuideSetsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFieldGuideSetsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSetsRowHandle StructToRowHandle(FFieldGuideSetsEnum EnumValue);  // parameters 0x28
};
