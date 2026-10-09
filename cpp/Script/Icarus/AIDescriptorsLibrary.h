// /Script/Icarus.AIDescriptorsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AIDescriptors/AIDescriptorsLibrary.h

UCLASS()
class UAIDescriptorsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAIDescriptorsTable(FName Name, FAIDescriptor Data, FAIDescriptorsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAIDescriptorsEnum(FAIDescriptorsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAIDescriptorsRowHandle CastToAIDescriptorsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAIDescriptorsEnum A, FAIDescriptorsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAIDescriptorsRowHandleFAIDescriptorsRowHandle(FAIDescriptorsRowHandle RowHandleA, FAIDescriptorsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAIDescriptorsStruct(FAIDescriptorsRowHandle RowHandle, FAIDescriptor& AIDescriptors, EValid& Paths);  // parameters 0x61
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsRowHandle MakeAIDescriptors(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsEnum MakeAIDescriptorsEnum(FAIDescriptorsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsRowHandle MakeAIDescriptorsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsRowHandle MakeLiteralAIDescriptors(FAIDescriptorsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAIDescriptorsEnum A, FAIDescriptorsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAIDescriptorsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAIDescriptorsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsEnum RowHandleToStruct(FAIDescriptorsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAIDescriptorsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAIDescriptorsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIDescriptorsRowHandle StructToRowHandle(FAIDescriptorsEnum EnumValue);  // parameters 0x28
};
