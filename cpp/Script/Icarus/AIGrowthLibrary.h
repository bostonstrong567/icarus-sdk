// /Script/Icarus.AIGrowthLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AIGrowth/AIGrowthLibrary.h

UCLASS()
class UAIGrowthLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAIGrowthTable(FName Name, FAIGrowth Data, FAIGrowthRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xC1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAIGrowthEnum(FAIGrowthEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAIGrowthRowHandle CastToAIGrowthRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAIGrowthEnum A, FAIGrowthEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAIGrowthRowHandleFAIGrowthRowHandle(FAIGrowthRowHandle RowHandleA, FAIGrowthRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAIGrowthStruct(FAIGrowthRowHandle RowHandle, FAIGrowth& AIGrowth, EValid& Paths);  // parameters 0xB9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthRowHandle MakeAIGrowth(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthEnum MakeAIGrowthEnum(FAIGrowthEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthRowHandle MakeAIGrowthFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthRowHandle MakeLiteralAIGrowth(FAIGrowthRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAIGrowthEnum A, FAIGrowthEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAIGrowthEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAIGrowthTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthEnum RowHandleToStruct(FAIGrowthRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAIGrowthEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAIGrowthEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIGrowthRowHandle StructToRowHandle(FAIGrowthEnum EnumValue);  // parameters 0x28
};
