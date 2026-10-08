// /Script/Icarus.GreatHuntsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GreatHunts/GreatHuntsLibrary.h

UCLASS()
class UGreatHuntsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToGreatHuntsTable(FName Name, FGreatHunt Data, FGreatHuntsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGreatHuntsEnum(FGreatHuntsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGreatHuntsRowHandle CastToGreatHuntsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGreatHuntsEnum A, FGreatHuntsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGreatHuntsRowHandleFGreatHuntsRowHandle(FGreatHuntsRowHandle RowHandleA, FGreatHuntsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGreatHuntsStruct(FGreatHuntsRowHandle RowHandle, FGreatHunt& GreatHunts, EValid& Paths);  // parameters 0xC9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsRowHandle MakeGreatHunts(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsEnum MakeGreatHuntsEnum(FGreatHuntsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsRowHandle MakeGreatHuntsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsRowHandle MakeLiteralGreatHunts(FGreatHuntsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGreatHuntsEnum A, FGreatHuntsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGreatHuntsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGreatHuntsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsEnum RowHandleToStruct(FGreatHuntsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGreatHuntsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGreatHuntsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGreatHuntsRowHandle StructToRowHandle(FGreatHuntsEnum EnumValue);  // parameters 0x28
};
