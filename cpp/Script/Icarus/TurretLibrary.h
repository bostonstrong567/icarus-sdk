// /Script/Icarus.TurretLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Turret/TurretLibrary.h

UCLASS()
class UTurretLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToTurretTable(FName Name, FTurretData Data, FTurretRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTurretEnum(FTurretEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTurretRowHandle CastToTurretRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTurretEnum A, FTurretEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTurretRowHandleFTurretRowHandle(FTurretRowHandle RowHandleA, FTurretRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTurretStruct(FTurretRowHandle RowHandle, FTurretData& Turret, EValid& Paths);  // parameters 0xD1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretRowHandle MakeLiteralTurret(FTurretRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretRowHandle MakeTurret(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretEnum MakeTurretEnum(FTurretEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretRowHandle MakeTurretFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTurretEnum A, FTurretEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTurretEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTurretTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretEnum RowHandleToStruct(FTurretRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTurretEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTurretEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTurretRowHandle StructToRowHandle(FTurretEnum EnumValue);  // parameters 0x28
};
