// /Script/Icarus.FarmingSeedsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FarmingSeeds/FarmingSeedsLibrary.h

UCLASS()
class UFarmingSeedsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToFarmingSeedsTable(FName Name, FFarmingSeedData Data, FFarmingSeedsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1D1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFarmingSeedsEnum(FFarmingSeedsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFarmingSeedsRowHandle CastToFarmingSeedsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFarmingSeedsEnum A, FFarmingSeedsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFarmingSeedsRowHandleFFarmingSeedsRowHandle(FFarmingSeedsRowHandle RowHandleA, FFarmingSeedsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFarmingSeedsStruct(FFarmingSeedsRowHandle RowHandle, FFarmingSeedData& FarmingSeeds, EValid& Paths);  // parameters 0x1C9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsRowHandle MakeFarmingSeeds(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsEnum MakeFarmingSeedsEnum(FFarmingSeedsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsRowHandle MakeFarmingSeedsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsRowHandle MakeLiteralFarmingSeeds(FFarmingSeedsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFarmingSeedsEnum A, FFarmingSeedsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFarmingSeedsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFarmingSeedsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsEnum RowHandleToStruct(FFarmingSeedsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFarmingSeedsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFarmingSeedsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingSeedsRowHandle StructToRowHandle(FFarmingSeedsEnum EnumValue);  // parameters 0x28
};
