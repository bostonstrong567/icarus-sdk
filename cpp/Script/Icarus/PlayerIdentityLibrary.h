// /Script/Icarus.PlayerIdentityLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/PlayerIdentity/PlayerIdentityLibrary.h

UCLASS()
class UPlayerIdentityLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToPlayerIdentityTable(FName Name, FPlayerIdentityData Data, FPlayerIdentityRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPlayerIdentityEnum(FPlayerIdentityEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPlayerIdentityRowHandle CastToPlayerIdentityRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPlayerIdentityEnum A, FPlayerIdentityEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPlayerIdentityRowHandleFPlayerIdentityRowHandle(FPlayerIdentityRowHandle RowHandleA, FPlayerIdentityRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPlayerIdentityStruct(FPlayerIdentityRowHandle RowHandle, FPlayerIdentityData& PlayerIdentity, EValid& Paths);  // parameters 0x41
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityRowHandle MakeLiteralPlayerIdentity(FPlayerIdentityRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityRowHandle MakePlayerIdentity(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityEnum MakePlayerIdentityEnum(FPlayerIdentityEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityRowHandle MakePlayerIdentityFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPlayerIdentityEnum A, FPlayerIdentityEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPlayerIdentityEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPlayerIdentityTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityEnum RowHandleToStruct(FPlayerIdentityRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPlayerIdentityEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPlayerIdentityEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerIdentityRowHandle StructToRowHandle(FPlayerIdentityEnum EnumValue);  // parameters 0x28
};
