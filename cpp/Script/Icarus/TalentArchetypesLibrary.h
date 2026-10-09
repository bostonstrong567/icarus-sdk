// /Script/Icarus.TalentArchetypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TalentArchetypes/TalentArchetypesLibrary.h

UCLASS()
class UTalentArchetypesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToTalentArchetypesTable(FName Name, FTalentArchetype Data, FTalentArchetypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xC1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTalentArchetypesEnum(FTalentArchetypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTalentArchetypesRowHandle CastToTalentArchetypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTalentArchetypesEnum A, FTalentArchetypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTalentArchetypesRowHandleFTalentArchetypesRowHandle(FTalentArchetypesRowHandle RowHandleA, FTalentArchetypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTalentArchetypesStruct(FTalentArchetypesRowHandle RowHandle, FTalentArchetype& TalentArchetypes, EValid& Paths);  // parameters 0xB9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesRowHandle MakeLiteralTalentArchetypes(FTalentArchetypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesRowHandle MakeTalentArchetypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesEnum MakeTalentArchetypesEnum(FTalentArchetypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesRowHandle MakeTalentArchetypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FTalentArchetypesRowHandle> MakeTalentArchetypesRowFromModel(const FTalentModelsRowHandle& InModel);  // parameters 0x28
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTalentArchetypesEnum A, FTalentArchetypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTalentArchetypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTalentArchetypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesEnum RowHandleToStruct(FTalentArchetypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTalentArchetypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTalentArchetypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesRowHandle StructToRowHandle(FTalentArchetypesEnum EnumValue);  // parameters 0x28
};
