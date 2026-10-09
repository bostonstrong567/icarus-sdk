// /Script/Icarus.HuntingClueSetupLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/HuntingClueSetup/HuntingClueSetupLibrary.h

UCLASS()
class UHuntingClueSetupLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToHuntingClueSetupTable(FName Name, FHuntingClueSetup Data, FHuntingClueSetupRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakHuntingClueSetupEnum(FHuntingClueSetupEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FHuntingClueSetupRowHandle CastToHuntingClueSetupRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FHuntingClueSetupEnum A, FHuntingClueSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FHuntingClueSetupRowHandleFHuntingClueSetupRowHandle(FHuntingClueSetupRowHandle RowHandleA, FHuntingClueSetupRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetHuntingClueSetupStruct(FHuntingClueSetupRowHandle RowHandle, FHuntingClueSetup& HuntingClueSetup, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupRowHandle MakeHuntingClueSetup(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupEnum MakeHuntingClueSetupEnum(FHuntingClueSetupEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupRowHandle MakeHuntingClueSetupFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupRowHandle MakeLiteralHuntingClueSetup(FHuntingClueSetupRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FHuntingClueSetupEnum A, FHuntingClueSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FHuntingClueSetupEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromHuntingClueSetupTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupEnum RowHandleToStruct(FHuntingClueSetupRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FHuntingClueSetupEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FHuntingClueSetupEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHuntingClueSetupRowHandle StructToRowHandle(FHuntingClueSetupEnum EnumValue);  // parameters 0x28
};
