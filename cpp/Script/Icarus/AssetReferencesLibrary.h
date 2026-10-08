// /Script/Icarus.AssetReferencesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AssetReferences/AssetReferencesLibrary.h

UCLASS()
class UAssetReferencesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAssetReferencesTable(FName Name, FAssetReferenceData Data, FAssetReferencesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAssetReferencesEnum(FAssetReferencesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAssetReferencesRowHandle CastToAssetReferencesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAssetReferencesEnum A, FAssetReferencesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAssetReferencesRowHandleFAssetReferencesRowHandle(FAssetReferencesRowHandle RowHandleA, FAssetReferencesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAssetReferencesStruct(FAssetReferencesRowHandle RowHandle, FAssetReferenceData& AssetReferences, EValid& Paths);  // parameters 0xA1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesRowHandle MakeAssetReferences(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesEnum MakeAssetReferencesEnum(FAssetReferencesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesRowHandle MakeAssetReferencesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesRowHandle MakeLiteralAssetReferences(FAssetReferencesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAssetReferencesEnum A, FAssetReferencesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAssetReferencesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAssetReferencesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesEnum RowHandleToStruct(FAssetReferencesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAssetReferencesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAssetReferencesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetReferencesRowHandle StructToRowHandle(FAssetReferencesEnum EnumValue);  // parameters 0x28
};
