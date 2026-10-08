// /Script/Icarus.TalentTreesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TalentTrees/TalentTreesLibrary.h

UCLASS()
class UTalentTreesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToTalentTreesTable(FName Name, FTalentTree Data, FTalentTreesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTalentTreesEnum(FTalentTreesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTalentTreesRowHandle CastToTalentTreesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTalentTreesEnum A, FTalentTreesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTalentTreesRowHandleFTalentTreesRowHandle(FTalentTreesRowHandle RowHandleA, FTalentTreesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTalentTreesStruct(FTalentTreesRowHandle RowHandle, FTalentTree& TalentTrees, EValid& Paths);  // parameters 0xD1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesRowHandle MakeLiteralTalentTrees(FTalentTreesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesRowHandle MakeTalentTrees(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesEnum MakeTalentTreesEnum(FTalentTreesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesRowHandle MakeTalentTreesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FTalentTreesRowHandle> MakeTalentTreesRowFromArchetype(const FTalentArchetypesRowHandle& InArchetype);  // parameters 0x28
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTalentTreesEnum A, FTalentTreesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTalentTreesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTalentTreesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesEnum RowHandleToStruct(FTalentTreesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTalentTreesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTalentTreesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesRowHandle StructToRowHandle(FTalentTreesEnum EnumValue);  // parameters 0x28
};
