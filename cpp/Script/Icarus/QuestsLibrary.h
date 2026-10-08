// /Script/Icarus.QuestsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Quests/QuestsLibrary.h

UCLASS()
class UQuestsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToQuestsTable(FName Name, FQuestSetup Data, FQuestsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x189
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakQuestsEnum(FQuestsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FQuestsRowHandle CastToQuestsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FQuestsEnum A, FQuestsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FQuestsRowHandleFQuestsRowHandle(FQuestsRowHandle RowHandleA, FQuestsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetQuestsStruct(FQuestsRowHandle RowHandle, FQuestSetup& Quests, EValid& Paths);  // parameters 0x181
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsRowHandle MakeLiteralQuests(FQuestsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsRowHandle MakeQuests(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsEnum MakeQuestsEnum(FQuestsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsRowHandle MakeQuestsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FQuestsEnum A, FQuestsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FQuestsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromQuestsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsEnum RowHandleToStruct(FQuestsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FQuestsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FQuestsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestsRowHandle StructToRowHandle(FQuestsEnum EnumValue);  // parameters 0x28
};
