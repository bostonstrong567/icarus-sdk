// /Script/Icarus.FishSetupLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FishSetup/FishSetupLibrary.h

UCLASS()
class UFishSetupLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFishSetupTable(FName Name, FFishSetup Data, FFishSetupRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xE9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFishSetupEnum(FFishSetupEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFishSetupRowHandle CastToFishSetupRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFishSetupEnum A, FFishSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFishSetupRowHandleFFishSetupRowHandle(FFishSetupRowHandle RowHandleA, FFishSetupRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFishSetupStruct(FFishSetupRowHandle RowHandle, FFishSetup& FishSetup, EValid& Paths);  // parameters 0xE1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupRowHandle MakeFishSetup(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupEnum MakeFishSetupEnum(FFishSetupEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupRowHandle MakeFishSetupFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupRowHandle MakeLiteralFishSetup(FFishSetupRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFishSetupEnum A, FFishSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFishSetupEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFishSetupTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupEnum RowHandleToStruct(FFishSetupRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFishSetupEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFishSetupEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFishSetupRowHandle StructToRowHandle(FFishSetupEnum EnumValue);  // parameters 0x28
};
