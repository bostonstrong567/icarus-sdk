// /Script/Icarus.WeightLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Weight/WeightLibrary.h

UCLASS()
class UWeightLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToWeightTable(FName Name, FWeightData Data, FWeightRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWeightEnum(FWeightEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FWeightRowHandle CastToWeightRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FWeightEnum A, FWeightEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FWeightRowHandleFWeightRowHandle(FWeightRowHandle RowHandleA, FWeightRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetWeightStruct(FWeightRowHandle RowHandle, FWeightData& Weight, EValid& Paths);  // parameters 0x69
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightRowHandle MakeLiteralWeight(FWeightRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightRowHandle MakeWeight(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightEnum MakeWeightEnum(FWeightEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightRowHandle MakeWeightFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FWeightEnum A, FWeightEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FWeightEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromWeightTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightEnum RowHandleToStruct(FWeightRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FWeightEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FWeightEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeightRowHandle StructToRowHandle(FWeightEnum EnumValue);  // parameters 0x28
};
