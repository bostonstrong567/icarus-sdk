// /Script/Icarus.IcarusResourcesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/IcarusResources/IcarusResourcesLibrary.h

UCLASS()
class UIcarusResourcesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToIcarusResourcesTable(FName Name, FIcarusResource Data, FIcarusResourcesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xF1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakIcarusResourcesEnum(FIcarusResourcesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FIcarusResourcesRowHandle CastToIcarusResourcesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FIcarusResourcesEnum A, FIcarusResourcesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FIcarusResourcesRowHandleFIcarusResourcesRowHandle(FIcarusResourcesRowHandle RowHandleA, FIcarusResourcesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetIcarusResourcesStruct(FIcarusResourcesRowHandle RowHandle, FIcarusResource& IcarusResources, EValid& Paths);  // parameters 0xE9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesRowHandle MakeIcarusResources(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesEnum MakeIcarusResourcesEnum(FIcarusResourcesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesRowHandle MakeIcarusResourcesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesRowHandle MakeLiteralIcarusResources(FIcarusResourcesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FIcarusResourcesEnum A, FIcarusResourcesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FIcarusResourcesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromIcarusResourcesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesEnum RowHandleToStruct(FIcarusResourcesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FIcarusResourcesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FIcarusResourcesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusResourcesRowHandle StructToRowHandle(FIcarusResourcesEnum EnumValue);  // parameters 0x28
};
