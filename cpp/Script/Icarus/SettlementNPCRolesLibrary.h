// /Script/Icarus.SettlementNPCRolesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementNPCRoles/SettlementNPCRolesLibrary.h

UCLASS()
class USettlementNPCRolesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToSettlementNPCRolesTable(FName Name, FSettlementNPCRoleData Data, FSettlementNPCRolesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSettlementNPCRolesEnum(FSettlementNPCRolesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSettlementNPCRolesRowHandle CastToSettlementNPCRolesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSettlementNPCRolesEnum A, FSettlementNPCRolesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSettlementNPCRolesRowHandleFSettlementNPCRolesRowHandle(FSettlementNPCRolesRowHandle RowHandleA, FSettlementNPCRolesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSettlementNPCRolesStruct(FSettlementNPCRolesRowHandle RowHandle, FSettlementNPCRoleData& SettlementNPCRoles, EValid& Paths);  // parameters 0xD9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesRowHandle MakeLiteralSettlementNPCRoles(FSettlementNPCRolesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesRowHandle MakeSettlementNPCRoles(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesEnum MakeSettlementNPCRolesEnum(FSettlementNPCRolesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesRowHandle MakeSettlementNPCRolesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSettlementNPCRolesEnum A, FSettlementNPCRolesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSettlementNPCRolesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSettlementNPCRolesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesEnum RowHandleToStruct(FSettlementNPCRolesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSettlementNPCRolesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSettlementNPCRolesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCRolesRowHandle StructToRowHandle(FSettlementNPCRolesEnum EnumValue);  // parameters 0x28
};
