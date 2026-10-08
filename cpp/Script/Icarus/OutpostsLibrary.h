// /Script/Icarus.OutpostsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Outposts/OutpostsLibrary.h

UCLASS()
class UOutpostsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToOutpostsTable(FName Name, FOutpost Data, FOutpostsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakOutpostsEnum(FOutpostsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FOutpostsRowHandle CastToOutpostsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FOutpostsEnum A, FOutpostsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FOutpostsRowHandleFOutpostsRowHandle(FOutpostsRowHandle RowHandleA, FOutpostsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetOutpostsStruct(FOutpostsRowHandle RowHandle, FOutpost& Outposts, EValid& Paths);  // parameters 0x89
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsRowHandle MakeLiteralOutposts(FOutpostsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsRowHandle MakeOutposts(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsEnum MakeOutpostsEnum(FOutpostsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsRowHandle MakeOutpostsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FOutpostsEnum A, FOutpostsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FOutpostsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromOutpostsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsEnum RowHandleToStruct(FOutpostsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FOutpostsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FOutpostsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOutpostsRowHandle StructToRowHandle(FOutpostsEnum EnumValue);  // parameters 0x28
};
