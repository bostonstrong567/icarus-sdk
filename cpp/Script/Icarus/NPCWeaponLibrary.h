// /Script/Icarus.NPCWeaponLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/NPCWeapon/NPCWeaponLibrary.h

UCLASS()
class UNPCWeaponLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToNPCWeaponTable(FName Name, FNPCWeaponData Data, FNPCWeaponRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x159
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakNPCWeaponEnum(FNPCWeaponEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FNPCWeaponRowHandle CastToNPCWeaponRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FNPCWeaponEnum A, FNPCWeaponEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FNPCWeaponRowHandleFNPCWeaponRowHandle(FNPCWeaponRowHandle RowHandleA, FNPCWeaponRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetNPCWeaponStruct(FNPCWeaponRowHandle RowHandle, FNPCWeaponData& NPCWeapon, EValid& Paths);  // parameters 0x151
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponRowHandle MakeLiteralNPCWeapon(FNPCWeaponRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponRowHandle MakeNPCWeapon(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponEnum MakeNPCWeaponEnum(FNPCWeaponEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponRowHandle MakeNPCWeaponFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FNPCWeaponEnum A, FNPCWeaponEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FNPCWeaponEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromNPCWeaponTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponEnum RowHandleToStruct(FNPCWeaponRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FNPCWeaponEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FNPCWeaponEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FNPCWeaponRowHandle StructToRowHandle(FNPCWeaponEnum EnumValue);  // parameters 0x28
};
