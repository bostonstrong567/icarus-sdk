// /Script/Icarus.DeployableSetupLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/DeployableSetup/DeployableSetupLibrary.h

UCLASS()
class UDeployableSetupLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToDeployableSetupTable(FName Name, FDeployableSetup Data, FDeployableSetupRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1B9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakDeployableSetupEnum(FDeployableSetupEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FDeployableSetupRowHandle CastToDeployableSetupRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FDeployableSetupEnum A, FDeployableSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FDeployableSetupRowHandleFDeployableSetupRowHandle(FDeployableSetupRowHandle RowHandleA, FDeployableSetupRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetDeployableSetupStruct(FDeployableSetupRowHandle RowHandle, FDeployableSetup& DeployableSetup, EValid& Paths);  // parameters 0x1B1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupRowHandle MakeDeployableSetup(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupEnum MakeDeployableSetupEnum(FDeployableSetupEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupRowHandle MakeDeployableSetupFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupRowHandle MakeLiteralDeployableSetup(FDeployableSetupRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FDeployableSetupEnum A, FDeployableSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FDeployableSetupEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromDeployableSetupTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupEnum RowHandleToStruct(FDeployableSetupRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FDeployableSetupEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FDeployableSetupEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDeployableSetupRowHandle StructToRowHandle(FDeployableSetupEnum EnumValue);  // parameters 0x28
};
