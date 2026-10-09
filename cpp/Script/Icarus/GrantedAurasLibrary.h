// /Script/Icarus.GrantedAurasLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GrantedAuras/GrantedAurasLibrary.h

UCLASS()
class UGrantedAurasLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToGrantedAurasTable(FName Name, FAuraInfo Data, FGrantedAurasRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGrantedAurasEnum(FGrantedAurasEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGrantedAurasRowHandle CastToGrantedAurasRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGrantedAurasEnum A, FGrantedAurasEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGrantedAurasRowHandleFGrantedAurasRowHandle(FGrantedAurasRowHandle RowHandleA, FGrantedAurasRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGrantedAurasStruct(FGrantedAurasRowHandle RowHandle, FAuraInfo& GrantedAuras, EValid& Paths);  // parameters 0x69
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasRowHandle MakeGrantedAuras(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasEnum MakeGrantedAurasEnum(FGrantedAurasEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasRowHandle MakeGrantedAurasFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasRowHandle MakeLiteralGrantedAuras(FGrantedAurasRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGrantedAurasEnum A, FGrantedAurasEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGrantedAurasEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGrantedAurasTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasEnum RowHandleToStruct(FGrantedAurasRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGrantedAurasEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGrantedAurasEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGrantedAurasRowHandle StructToRowHandle(FGrantedAurasEnum EnumValue);  // parameters 0x28
};
