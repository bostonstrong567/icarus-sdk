// /Script/Icarus.AutonomousSpawnsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AutonomousSpawns/AutonomousSpawnsLibrary.h

UCLASS()
class UAutonomousSpawnsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAutonomousSpawnsTable(FName Name, FAutonomousSpawnData Data, FAutonomousSpawnsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAutonomousSpawnsEnum(FAutonomousSpawnsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAutonomousSpawnsRowHandle CastToAutonomousSpawnsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAutonomousSpawnsEnum A, FAutonomousSpawnsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAutonomousSpawnsRowHandleFAutonomousSpawnsRowHandle(FAutonomousSpawnsRowHandle RowHandleA, FAutonomousSpawnsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAutonomousSpawnsStruct(FAutonomousSpawnsRowHandle RowHandle, FAutonomousSpawnData& AutonomousSpawns, EValid& Paths);  // parameters 0xD1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsRowHandle MakeAutonomousSpawns(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsEnum MakeAutonomousSpawnsEnum(FAutonomousSpawnsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsRowHandle MakeAutonomousSpawnsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsRowHandle MakeLiteralAutonomousSpawns(FAutonomousSpawnsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAutonomousSpawnsEnum A, FAutonomousSpawnsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAutonomousSpawnsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAutonomousSpawnsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsEnum RowHandleToStruct(FAutonomousSpawnsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAutonomousSpawnsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAutonomousSpawnsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAutonomousSpawnsRowHandle StructToRowHandle(FAutonomousSpawnsEnum EnumValue);  // parameters 0x28
};
