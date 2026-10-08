// /Script/Icarus.EpicCreaturesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/EpicCreatures/EpicCreaturesLibrary.h

UCLASS()
class UEpicCreaturesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToEpicCreaturesTable(FName Name, FEpicCreatures Data, FEpicCreaturesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakEpicCreaturesEnum(FEpicCreaturesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FEpicCreaturesRowHandle CastToEpicCreaturesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FEpicCreaturesEnum A, FEpicCreaturesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FEpicCreaturesRowHandleFEpicCreaturesRowHandle(FEpicCreaturesRowHandle RowHandleA, FEpicCreaturesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetEpicCreaturesStruct(FEpicCreaturesRowHandle RowHandle, FEpicCreatures& EpicCreatures, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesRowHandle MakeEpicCreatures(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesEnum MakeEpicCreaturesEnum(FEpicCreaturesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesRowHandle MakeEpicCreaturesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesRowHandle MakeLiteralEpicCreatures(FEpicCreaturesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FEpicCreaturesEnum A, FEpicCreaturesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FEpicCreaturesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromEpicCreaturesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesEnum RowHandleToStruct(FEpicCreaturesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FEpicCreaturesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FEpicCreaturesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEpicCreaturesRowHandle StructToRowHandle(FEpicCreaturesEnum EnumValue);  // parameters 0x28
};
