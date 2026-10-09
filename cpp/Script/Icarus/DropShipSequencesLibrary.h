// /Script/Icarus.DropShipSequencesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/DropShipSequences/DropShipSequencesLibrary.h

UCLASS()
class UDropShipSequencesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToDropShipSequencesTable(FName Name, FDropShipSequence Data, FDropShipSequencesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakDropShipSequencesEnum(FDropShipSequencesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FDropShipSequencesRowHandle CastToDropShipSequencesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FDropShipSequencesEnum A, FDropShipSequencesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FDropShipSequencesRowHandleFDropShipSequencesRowHandle(FDropShipSequencesRowHandle RowHandleA, FDropShipSequencesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetDropShipSequencesStruct(FDropShipSequencesRowHandle RowHandle, FDropShipSequence& DropShipSequences, EValid& Paths);  // parameters 0x49
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesRowHandle MakeDropShipSequences(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesEnum MakeDropShipSequencesEnum(FDropShipSequencesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesRowHandle MakeDropShipSequencesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesRowHandle MakeLiteralDropShipSequences(FDropShipSequencesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FDropShipSequencesEnum A, FDropShipSequencesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FDropShipSequencesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromDropShipSequencesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesEnum RowHandleToStruct(FDropShipSequencesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FDropShipSequencesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FDropShipSequencesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropShipSequencesRowHandle StructToRowHandle(FDropShipSequencesEnum EnumValue);  // parameters 0x28
};
