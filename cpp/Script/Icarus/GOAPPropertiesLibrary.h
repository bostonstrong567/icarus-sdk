// /Script/Icarus.GOAPPropertiesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GOAPProperties/GOAPPropertiesLibrary.h

UCLASS()
class UGOAPPropertiesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToGOAPPropertiesTable(FName Name, FGOAPProperties Data, FGOAPPropertiesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGOAPPropertiesEnum(FGOAPPropertiesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGOAPPropertiesRowHandle CastToGOAPPropertiesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGOAPPropertiesEnum A, FGOAPPropertiesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGOAPPropertiesRowHandleFGOAPPropertiesRowHandle(FGOAPPropertiesRowHandle RowHandleA, FGOAPPropertiesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGOAPPropertiesStruct(FGOAPPropertiesRowHandle RowHandle, FGOAPProperties& GOAPProperties, EValid& Paths);  // parameters 0x39
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesRowHandle MakeGOAPProperties(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesEnum MakeGOAPPropertiesEnum(FGOAPPropertiesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesRowHandle MakeGOAPPropertiesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesRowHandle MakeLiteralGOAPProperties(FGOAPPropertiesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGOAPPropertiesEnum A, FGOAPPropertiesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGOAPPropertiesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGOAPPropertiesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesEnum RowHandleToStruct(FGOAPPropertiesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGOAPPropertiesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGOAPPropertiesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPPropertiesRowHandle StructToRowHandle(FGOAPPropertiesEnum EnumValue);  // parameters 0x28
};
