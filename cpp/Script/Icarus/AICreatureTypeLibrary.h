// /Script/Icarus.AICreatureTypeLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AICreatureType/AICreatureTypeLibrary.h

UCLASS()
class UAICreatureTypeLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAICreatureTypeTable(FName Name, FAICreatureType Data, FAICreatureTypeRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAICreatureTypeEnum(FAICreatureTypeEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAICreatureTypeRowHandle CastToAICreatureTypeRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAICreatureTypeEnum A, FAICreatureTypeEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAICreatureTypeRowHandleFAICreatureTypeRowHandle(FAICreatureTypeRowHandle RowHandleA, FAICreatureTypeRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAICreatureTypeStruct(FAICreatureTypeRowHandle RowHandle, FAICreatureType& AICreatureType, EValid& Paths);  // parameters 0xA1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeRowHandle MakeAICreatureType(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeEnum MakeAICreatureTypeEnum(FAICreatureTypeEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeRowHandle MakeAICreatureTypeFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeRowHandle MakeLiteralAICreatureType(FAICreatureTypeRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAICreatureTypeEnum A, FAICreatureTypeEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAICreatureTypeEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAICreatureTypeTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeEnum RowHandleToStruct(FAICreatureTypeRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAICreatureTypeEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAICreatureTypeEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAICreatureTypeRowHandle StructToRowHandle(FAICreatureTypeEnum EnumValue);  // parameters 0x28
};
