// /Script/Icarus.InteractionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Interactions/InteractionsLibrary.h

UCLASS()
class UInteractionsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToInteractionsTable(FName Name, FInteractData Data, FInteractionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakInteractionsEnum(FInteractionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FInteractionsRowHandle CastToInteractionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FInteractionsEnum A, FInteractionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FInteractionsRowHandleFInteractionsRowHandle(FInteractionsRowHandle RowHandleA, FInteractionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetInteractionsStruct(FInteractionsRowHandle RowHandle, FInteractData& Interactions, EValid& Paths);  // parameters 0x99
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsRowHandle MakeInteractions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsEnum MakeInteractionsEnum(FInteractionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsRowHandle MakeInteractionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsRowHandle MakeLiteralInteractions(FInteractionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FInteractionsEnum A, FInteractionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FInteractionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromInteractionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsEnum RowHandleToStruct(FInteractionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FInteractionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FInteractionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInteractionsRowHandle StructToRowHandle(FInteractionsEnum EnumValue);  // parameters 0x28
};
