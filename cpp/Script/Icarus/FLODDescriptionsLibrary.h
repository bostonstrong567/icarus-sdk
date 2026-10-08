// /Script/Icarus.FLODDescriptionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FLODDescriptions/FLODDescriptionsLibrary.h

UCLASS()
class UFLODDescriptionsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFLODDescriptionsTable(FName Name, FFLODDescription Data, FFLODDescriptionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x159
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFLODDescriptionsEnum(FFLODDescriptionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFLODDescriptionsRowHandle CastToFLODDescriptionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFLODDescriptionsEnum A, FFLODDescriptionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFLODDescriptionsRowHandleFFLODDescriptionsRowHandle(FFLODDescriptionsRowHandle RowHandleA, FFLODDescriptionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFLODDescriptionsStruct(FFLODDescriptionsRowHandle RowHandle, FFLODDescription& FLODDescriptions, EValid& Paths);  // parameters 0x151
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsRowHandle MakeFLODDescriptions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsEnum MakeFLODDescriptionsEnum(FFLODDescriptionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsRowHandle MakeFLODDescriptionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsRowHandle MakeLiteralFLODDescriptions(FFLODDescriptionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFLODDescriptionsEnum A, FFLODDescriptionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFLODDescriptionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFLODDescriptionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsEnum RowHandleToStruct(FFLODDescriptionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFLODDescriptionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFLODDescriptionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFLODDescriptionsRowHandle StructToRowHandle(FFLODDescriptionsEnum EnumValue);  // parameters 0x28
};
