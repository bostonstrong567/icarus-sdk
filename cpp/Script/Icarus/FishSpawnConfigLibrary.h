// /Script/Icarus.FishSpawnConfigLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FishSpawnConfig/FishSpawnConfigLibrary.h

UCLASS()
class UFishSpawnConfigLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToFishSpawnConfigTable(FName Name, FFishSpawnConfig Data, FFishSpawnConfigRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFishSpawnConfigEnum(FFishSpawnConfigEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFishSpawnConfigRowHandle CastToFishSpawnConfigRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFishSpawnConfigEnum A, FFishSpawnConfigEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFishSpawnConfigRowHandleFFishSpawnConfigRowHandle(FFishSpawnConfigRowHandle RowHandleA, FFishSpawnConfigRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFishSpawnConfigStruct(FFishSpawnConfigRowHandle RowHandle, FFishSpawnConfig& FishSpawnConfig, EValid& Paths);  // parameters 0x69
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigRowHandle MakeFishSpawnConfig(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigEnum MakeFishSpawnConfigEnum(FFishSpawnConfigEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigRowHandle MakeFishSpawnConfigFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigRowHandle MakeLiteralFishSpawnConfig(FFishSpawnConfigRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFishSpawnConfigEnum A, FFishSpawnConfigEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFishSpawnConfigEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFishSpawnConfigTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigEnum RowHandleToStruct(FFishSpawnConfigRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFishSpawnConfigEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFishSpawnConfigEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSpawnConfigRowHandle StructToRowHandle(FFishSpawnConfigEnum EnumValue);  // parameters 0x28
};
