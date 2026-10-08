// /Script/Icarus.SaddlesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Saddles/SaddlesLibrary.h

UCLASS()
class USaddlesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToSaddlesTable(FName Name, FSaddleData Data, FSaddlesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x171
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSaddlesEnum(FSaddlesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSaddlesRowHandle CastToSaddlesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSaddlesEnum A, FSaddlesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSaddlesRowHandleFSaddlesRowHandle(FSaddlesRowHandle RowHandleA, FSaddlesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSaddlesStruct(FSaddlesRowHandle RowHandle, FSaddleData& Saddles, EValid& Paths);  // parameters 0x169
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesRowHandle MakeLiteralSaddles(FSaddlesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesRowHandle MakeSaddles(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesEnum MakeSaddlesEnum(FSaddlesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesRowHandle MakeSaddlesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSaddlesEnum A, FSaddlesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSaddlesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSaddlesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesEnum RowHandleToStruct(FSaddlesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSaddlesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSaddlesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSaddlesRowHandle StructToRowHandle(FSaddlesEnum EnumValue);  // parameters 0x28
};
