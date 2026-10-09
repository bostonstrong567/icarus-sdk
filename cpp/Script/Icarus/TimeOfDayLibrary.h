// /Script/Icarus.TimeOfDayLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TimeOfDay/TimeOfDayLibrary.h

UCLASS()
class UTimeOfDayLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToTimeOfDayTable(FName Name, FTimeOfDay Data, FTimeOfDayRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTimeOfDayEnum(FTimeOfDayEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTimeOfDayRowHandle CastToTimeOfDayRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTimeOfDayEnum A, FTimeOfDayEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTimeOfDayRowHandleFTimeOfDayRowHandle(FTimeOfDayRowHandle RowHandleA, FTimeOfDayRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTimeOfDayStruct(FTimeOfDayRowHandle RowHandle, FTimeOfDay& TimeOfDay, EValid& Paths);  // parameters 0x39
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayRowHandle MakeLiteralTimeOfDay(FTimeOfDayRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayRowHandle MakeTimeOfDay(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayEnum MakeTimeOfDayEnum(FTimeOfDayEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayRowHandle MakeTimeOfDayFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTimeOfDayEnum A, FTimeOfDayEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTimeOfDayEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTimeOfDayTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayEnum RowHandleToStruct(FTimeOfDayRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTimeOfDayEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTimeOfDayEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimeOfDayRowHandle StructToRowHandle(FTimeOfDayEnum EnumValue);  // parameters 0x28
};
