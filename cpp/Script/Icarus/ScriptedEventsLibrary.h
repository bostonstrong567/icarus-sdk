// /Script/Icarus.ScriptedEventsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ScriptedEvents/ScriptedEventsLibrary.h

UCLASS()
class UScriptedEventsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToScriptedEventsTable(FName Name, FScriptedEventData Data, FScriptedEventsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakScriptedEventsEnum(FScriptedEventsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FScriptedEventsRowHandle CastToScriptedEventsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FScriptedEventsEnum A, FScriptedEventsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FScriptedEventsRowHandleFScriptedEventsRowHandle(FScriptedEventsRowHandle RowHandleA, FScriptedEventsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetScriptedEventsStruct(FScriptedEventsRowHandle RowHandle, FScriptedEventData& ScriptedEvents, EValid& Paths);  // parameters 0x71
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsRowHandle MakeLiteralScriptedEvents(FScriptedEventsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsRowHandle MakeScriptedEvents(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsEnum MakeScriptedEventsEnum(FScriptedEventsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsRowHandle MakeScriptedEventsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FScriptedEventsEnum A, FScriptedEventsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FScriptedEventsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromScriptedEventsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsEnum RowHandleToStruct(FScriptedEventsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FScriptedEventsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FScriptedEventsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScriptedEventsRowHandle StructToRowHandle(FScriptedEventsEnum EnumValue);  // parameters 0x28
};
