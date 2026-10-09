// /Script/Icarus.TalentViewsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TalentViews/TalentViewsLibrary.h

UCLASS()
class UTalentViewsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToTalentViewsTable(FName Name, FTalentView Data, FTalentViewsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1BE1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTalentViewsEnum(FTalentViewsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTalentViewsRowHandle CastToTalentViewsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTalentViewsEnum A, FTalentViewsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTalentViewsRowHandleFTalentViewsRowHandle(FTalentViewsRowHandle RowHandleA, FTalentViewsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTalentViewsStruct(FTalentViewsRowHandle RowHandle, FTalentView& TalentViews, EValid& Paths);  // parameters 0x1BD9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsRowHandle MakeLiteralTalentViews(FTalentViewsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsRowHandle MakeTalentViews(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsEnum MakeTalentViewsEnum(FTalentViewsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsRowHandle MakeTalentViewsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTalentViewsEnum A, FTalentViewsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTalentViewsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTalentViewsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsEnum RowHandleToStruct(FTalentViewsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTalentViewsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTalentViewsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentViewsRowHandle StructToRowHandle(FTalentViewsEnum EnumValue);  // parameters 0x28
};
