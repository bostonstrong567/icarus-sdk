// /Script/Icarus.ContextMenuGroupTypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ContextMenuGroupTypes/ContextMenuGroupTypesLibrary.h

UCLASS()
class UContextMenuGroupTypesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToContextMenuGroupTypesTable(FName Name, FContextMenuGroupType Data, FContextMenuGroupTypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakContextMenuGroupTypesEnum(FContextMenuGroupTypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FContextMenuGroupTypesRowHandle CastToContextMenuGroupTypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FContextMenuGroupTypesEnum A, FContextMenuGroupTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FContextMenuGroupTypesRowHandleFContextMenuGroupTypesRowHandle(FContextMenuGroupTypesRowHandle RowHandleA, FContextMenuGroupTypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetContextMenuGroupTypesStruct(FContextMenuGroupTypesRowHandle RowHandle, FContextMenuGroupType& ContextMenuGroupTypes, EValid& Paths);  // parameters 0x51
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesRowHandle MakeContextMenuGroupTypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesEnum MakeContextMenuGroupTypesEnum(FContextMenuGroupTypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesRowHandle MakeContextMenuGroupTypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesRowHandle MakeLiteralContextMenuGroupTypes(FContextMenuGroupTypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FContextMenuGroupTypesEnum A, FContextMenuGroupTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FContextMenuGroupTypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromContextMenuGroupTypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesEnum RowHandleToStruct(FContextMenuGroupTypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FContextMenuGroupTypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FContextMenuGroupTypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FContextMenuGroupTypesRowHandle StructToRowHandle(FContextMenuGroupTypesEnum EnumValue);  // parameters 0x28
};
