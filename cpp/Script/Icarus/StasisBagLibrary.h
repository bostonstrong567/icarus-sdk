// /Script/Icarus.StasisBagLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/StasisBag/StasisBagLibrary.h

UCLASS()
class UStasisBagLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToStasisBagTable(FName Name, FStasisBagData Data, FStasisBagRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakStasisBagEnum(FStasisBagEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FStasisBagRowHandle CastToStasisBagRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FStasisBagEnum A, FStasisBagEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FStasisBagRowHandleFStasisBagRowHandle(FStasisBagRowHandle RowHandleA, FStasisBagRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetStasisBagStruct(FStasisBagRowHandle RowHandle, FStasisBagData& StasisBag, EValid& Paths);  // parameters 0x71
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagRowHandle MakeLiteralStasisBag(FStasisBagRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagRowHandle MakeStasisBag(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagEnum MakeStasisBagEnum(FStasisBagEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagRowHandle MakeStasisBagFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FStasisBagEnum A, FStasisBagEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FStasisBagEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromStasisBagTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagEnum RowHandleToStruct(FStasisBagRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FStasisBagEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FStasisBagEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStasisBagRowHandle StructToRowHandle(FStasisBagEnum EnumValue);  // parameters 0x28
};
