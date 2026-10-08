// /Script/Icarus.TalentsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Talents/TalentsLibrary.h

UCLASS()
class UTalentsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToTalentsTable(FName Name, FTalent Data, FTalentsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x151
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTalentsEnum(FTalentsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTalentsRowHandle CastToTalentsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTalentsEnum A, FTalentsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTalentsRowHandleFTalentsRowHandle(FTalentsRowHandle RowHandleA, FTalentsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTalentsStruct(FTalentsRowHandle RowHandle, FTalent& Talents, EValid& Paths);  // parameters 0x149
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsRowHandle MakeLiteralTalents(FTalentsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsRowHandle MakeTalents(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsEnum MakeTalentsEnum(FTalentsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsRowHandle MakeTalentsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FTalentsRowHandle> MakeTalentsRowFromTalentTree(const FTalentTreesRowHandle& InTalentTree);  // parameters 0x28
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTalentsEnum A, FTalentsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTalentsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTalentsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsEnum RowHandleToStruct(FTalentsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTalentsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTalentsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsRowHandle StructToRowHandle(FTalentsEnum EnumValue);  // parameters 0x28
};
