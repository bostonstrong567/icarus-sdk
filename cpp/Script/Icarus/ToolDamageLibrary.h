// /Script/Icarus.ToolDamageLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ToolDamage/ToolDamageLibrary.h

UCLASS()
class UToolDamageLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToToolDamageTable(FName Name, FToolDamage Data, FToolDamageRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakToolDamageEnum(FToolDamageEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FToolDamageRowHandle CastToToolDamageRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FToolDamageEnum A, FToolDamageEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FToolDamageRowHandleFToolDamageRowHandle(FToolDamageRowHandle RowHandleA, FToolDamageRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetToolDamageStruct(FToolDamageRowHandle RowHandle, FToolDamage& ToolDamage, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageRowHandle MakeLiteralToolDamage(FToolDamageRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageRowHandle MakeToolDamage(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageEnum MakeToolDamageEnum(FToolDamageEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageRowHandle MakeToolDamageFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FToolDamageEnum A, FToolDamageEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FToolDamageEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromToolDamageTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageEnum RowHandleToStruct(FToolDamageRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FToolDamageEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FToolDamageEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FToolDamageRowHandle StructToRowHandle(FToolDamageEnum EnumValue);  // parameters 0x28
};
