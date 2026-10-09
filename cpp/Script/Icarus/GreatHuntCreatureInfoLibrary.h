// /Script/Icarus.GreatHuntCreatureInfoLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GreatHuntCreatureInfo/GreatHuntCreatureInfoLibrary.h

UCLASS()
class UGreatHuntCreatureInfoLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToGreatHuntCreatureInfoTable(FName Name, FGreatHuntCreatureInfo Data, FGreatHuntCreatureInfoRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x101
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGreatHuntCreatureInfoEnum(FGreatHuntCreatureInfoEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGreatHuntCreatureInfoRowHandle CastToGreatHuntCreatureInfoRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGreatHuntCreatureInfoEnum A, FGreatHuntCreatureInfoEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGreatHuntCreatureInfoRowHandleFGreatHuntCreatureInfoRowHandle(FGreatHuntCreatureInfoRowHandle RowHandleA, FGreatHuntCreatureInfoRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGreatHuntCreatureInfoStruct(FGreatHuntCreatureInfoRowHandle RowHandle, FGreatHuntCreatureInfo& GreatHuntCreatureInfo, EValid& Paths);  // parameters 0xF9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoRowHandle MakeGreatHuntCreatureInfo(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoEnum MakeGreatHuntCreatureInfoEnum(FGreatHuntCreatureInfoEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoRowHandle MakeGreatHuntCreatureInfoFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoRowHandle MakeLiteralGreatHuntCreatureInfo(FGreatHuntCreatureInfoRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGreatHuntCreatureInfoEnum A, FGreatHuntCreatureInfoEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGreatHuntCreatureInfoEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGreatHuntCreatureInfoTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoEnum RowHandleToStruct(FGreatHuntCreatureInfoRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGreatHuntCreatureInfoEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGreatHuntCreatureInfoEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntCreatureInfoRowHandle StructToRowHandle(FGreatHuntCreatureInfoEnum EnumValue);  // parameters 0x28
};
