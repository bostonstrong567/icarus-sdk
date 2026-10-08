// /Script/Icarus.ExoticSpawnLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ExoticSpawn/ExoticSpawnLibrary.h

UCLASS()
class UExoticSpawnLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToExoticSpawnTable(FName Name, FExoticSpawn Data, FExoticSpawnRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakExoticSpawnEnum(FExoticSpawnEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FExoticSpawnRowHandle CastToExoticSpawnRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FExoticSpawnEnum A, FExoticSpawnEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FExoticSpawnRowHandleFExoticSpawnRowHandle(FExoticSpawnRowHandle RowHandleA, FExoticSpawnRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetExoticSpawnStruct(FExoticSpawnRowHandle RowHandle, FExoticSpawn& ExoticSpawn, EValid& Paths);  // parameters 0x31
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnRowHandle MakeExoticSpawn(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnEnum MakeExoticSpawnEnum(FExoticSpawnEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnRowHandle MakeExoticSpawnFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnRowHandle MakeLiteralExoticSpawn(FExoticSpawnRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FExoticSpawnEnum A, FExoticSpawnEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FExoticSpawnEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromExoticSpawnTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnEnum RowHandleToStruct(FExoticSpawnRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FExoticSpawnEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FExoticSpawnEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FExoticSpawnRowHandle StructToRowHandle(FExoticSpawnEnum EnumValue);  // parameters 0x28
};
