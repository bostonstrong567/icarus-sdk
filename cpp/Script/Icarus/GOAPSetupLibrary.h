// /Script/Icarus.GOAPSetupLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GOAPSetup/GOAPSetupLibrary.h

UCLASS()
class UGOAPSetupLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToGOAPSetupTable(FName Name, FGOAPSetup Data, FGOAPSetupRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGOAPSetupEnum(FGOAPSetupEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGOAPSetupRowHandle CastToGOAPSetupRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGOAPSetupEnum A, FGOAPSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGOAPSetupRowHandleFGOAPSetupRowHandle(FGOAPSetupRowHandle RowHandleA, FGOAPSetupRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGOAPSetupStruct(FGOAPSetupRowHandle RowHandle, FGOAPSetup& GOAPSetup, EValid& Paths);  // parameters 0xD9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupRowHandle MakeGOAPSetup(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupEnum MakeGOAPSetupEnum(FGOAPSetupEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupRowHandle MakeGOAPSetupFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupRowHandle MakeLiteralGOAPSetup(FGOAPSetupRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGOAPSetupEnum A, FGOAPSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGOAPSetupEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGOAPSetupTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupEnum RowHandleToStruct(FGOAPSetupRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGOAPSetupEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGOAPSetupEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPSetupRowHandle StructToRowHandle(FGOAPSetupEnum EnumValue);  // parameters 0x28
};
