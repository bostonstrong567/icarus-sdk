// /Script/Icarus.AIRelationshipsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AIRelationships/AIRelationshipsLibrary.h

UCLASS()
class UAIRelationshipsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAIRelationshipsTable(FName Name, FAIRelationshipData Data, FAIRelationshipsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAIRelationshipsEnum(FAIRelationshipsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAIRelationshipsRowHandle CastToAIRelationshipsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAIRelationshipsEnum A, FAIRelationshipsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAIRelationshipsRowHandleFAIRelationshipsRowHandle(FAIRelationshipsRowHandle RowHandleA, FAIRelationshipsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAIRelationshipsStruct(FAIRelationshipsRowHandle RowHandle, FAIRelationshipData& AIRelationships, EValid& Paths);  // parameters 0x61
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsRowHandle MakeAIRelationships(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsEnum MakeAIRelationshipsEnum(FAIRelationshipsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsRowHandle MakeAIRelationshipsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsRowHandle MakeLiteralAIRelationships(FAIRelationshipsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAIRelationshipsEnum A, FAIRelationshipsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAIRelationshipsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAIRelationshipsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsEnum RowHandleToStruct(FAIRelationshipsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAIRelationshipsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAIRelationshipsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIRelationshipsRowHandle StructToRowHandle(FAIRelationshipsEnum EnumValue);  // parameters 0x28
};
