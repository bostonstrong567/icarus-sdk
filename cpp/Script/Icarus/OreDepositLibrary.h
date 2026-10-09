// /Script/Icarus.OreDepositLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/OreDeposit/OreDepositLibrary.h

UCLASS()
class UOreDepositLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToOreDepositTable(FName Name, FOreDeposit Data, FOreDepositRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x141
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakOreDepositEnum(FOreDepositEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FOreDepositRowHandle CastToOreDepositRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FOreDepositEnum A, FOreDepositEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FOreDepositRowHandleFOreDepositRowHandle(FOreDepositRowHandle RowHandleA, FOreDepositRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetOreDepositStruct(FOreDepositRowHandle RowHandle, FOreDeposit& OreDeposit, EValid& Paths);  // parameters 0x139
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositRowHandle MakeLiteralOreDeposit(FOreDepositRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositRowHandle MakeOreDeposit(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositEnum MakeOreDepositEnum(FOreDepositEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositRowHandle MakeOreDepositFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FOreDepositEnum A, FOreDepositEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FOreDepositEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromOreDepositTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositEnum RowHandleToStruct(FOreDepositRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FOreDepositEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FOreDepositEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOreDepositRowHandle StructToRowHandle(FOreDepositEnum EnumValue);  // parameters 0x28
};
