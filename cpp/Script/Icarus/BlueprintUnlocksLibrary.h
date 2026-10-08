// /Script/Icarus.BlueprintUnlocksLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BlueprintUnlocks/BlueprintUnlocksLibrary.h

UCLASS()
class UBlueprintUnlocksLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToBlueprintUnlocksTable(FName Name, FBlueprintUnlock Data, FBlueprintUnlocksRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBlueprintUnlocksEnum(FBlueprintUnlocksEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBlueprintUnlocksRowHandle CastToBlueprintUnlocksRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBlueprintUnlocksEnum A, FBlueprintUnlocksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBlueprintUnlocksRowHandleFBlueprintUnlocksRowHandle(FBlueprintUnlocksRowHandle RowHandleA, FBlueprintUnlocksRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBlueprintUnlocksStruct(FBlueprintUnlocksRowHandle RowHandle, FBlueprintUnlock& BlueprintUnlocks, EValid& Paths);  // parameters 0x71
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksRowHandle MakeBlueprintUnlocks(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksEnum MakeBlueprintUnlocksEnum(FBlueprintUnlocksEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksRowHandle MakeBlueprintUnlocksFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksRowHandle MakeLiteralBlueprintUnlocks(FBlueprintUnlocksRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBlueprintUnlocksEnum A, FBlueprintUnlocksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBlueprintUnlocksEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBlueprintUnlocksTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksEnum RowHandleToStruct(FBlueprintUnlocksRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBlueprintUnlocksEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBlueprintUnlocksEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBlueprintUnlocksRowHandle StructToRowHandle(FBlueprintUnlocksEnum EnumValue);  // parameters 0x28
};
