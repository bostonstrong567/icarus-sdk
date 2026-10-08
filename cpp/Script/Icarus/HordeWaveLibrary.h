// /Script/Icarus.HordeWaveLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/HordeWave/HordeWaveLibrary.h

UCLASS()
class UHordeWaveLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToHordeWaveTable(FName Name, FHordeWave Data, FHordeWaveRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakHordeWaveEnum(FHordeWaveEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FHordeWaveRowHandle CastToHordeWaveRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FHordeWaveEnum A, FHordeWaveEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FHordeWaveRowHandleFHordeWaveRowHandle(FHordeWaveRowHandle RowHandleA, FHordeWaveRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetHordeWaveStruct(FHordeWaveRowHandle RowHandle, FHordeWave& HordeWave, EValid& Paths);  // parameters 0x41
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveRowHandle MakeHordeWave(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveEnum MakeHordeWaveEnum(FHordeWaveEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveRowHandle MakeHordeWaveFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveRowHandle MakeLiteralHordeWave(FHordeWaveRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FHordeWaveEnum A, FHordeWaveEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FHordeWaveEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromHordeWaveTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveEnum RowHandleToStruct(FHordeWaveRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FHordeWaveEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FHordeWaveEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHordeWaveRowHandle StructToRowHandle(FHordeWaveEnum EnumValue);  // parameters 0x28
};
