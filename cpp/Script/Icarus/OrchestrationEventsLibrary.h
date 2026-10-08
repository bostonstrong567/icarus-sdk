// /Script/Icarus.OrchestrationEventsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/OrchestrationEvents/OrchestrationEventsLibrary.h

UCLASS()
class UOrchestrationEventsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToOrchestrationEventsTable(FName Name, FOrchestrationEventDescription Data, FOrchestrationEventsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakOrchestrationEventsEnum(FOrchestrationEventsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FOrchestrationEventsRowHandle CastToOrchestrationEventsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FOrchestrationEventsEnum A, FOrchestrationEventsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FOrchestrationEventsRowHandleFOrchestrationEventsRowHandle(FOrchestrationEventsRowHandle RowHandleA, FOrchestrationEventsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetOrchestrationEventsStruct(FOrchestrationEventsRowHandle RowHandle, FOrchestrationEventDescription& OrchestrationEvents, EValid& Paths);  // parameters 0x99
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsRowHandle MakeLiteralOrchestrationEvents(FOrchestrationEventsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsRowHandle MakeOrchestrationEvents(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsEnum MakeOrchestrationEventsEnum(FOrchestrationEventsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsRowHandle MakeOrchestrationEventsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FOrchestrationEventsEnum A, FOrchestrationEventsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FOrchestrationEventsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromOrchestrationEventsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsEnum RowHandleToStruct(FOrchestrationEventsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FOrchestrationEventsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FOrchestrationEventsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOrchestrationEventsRowHandle StructToRowHandle(FOrchestrationEventsEnum EnumValue);  // parameters 0x28
};
