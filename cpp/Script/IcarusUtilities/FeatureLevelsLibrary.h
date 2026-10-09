// /Script/IcarusUtilities.FeatureLevelsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/IcarusUtilities/IcarusGenerated/FeatureLevels/FeatureLevelsLibrary.h

UCLASS()
class UFeatureLevelsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToFeatureLevelsTable(FName Name, FFeatureLevelData Data, FFeatureLevelsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFeatureLevelsEnum(FFeatureLevelsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFeatureLevelsRowHandle CastToFeatureLevelsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFeatureLevelsEnum A, FFeatureLevelsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle(FFeatureLevelsRowHandle RowHandleA, FFeatureLevelsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFeatureLevelsStruct(FFeatureLevelsRowHandle RowHandle, FFeatureLevelData& FeatureLevels, EValid& Paths);  // parameters 0xB1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsRowHandle MakeFeatureLevels(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsEnum MakeFeatureLevelsEnum(FFeatureLevelsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsRowHandle MakeFeatureLevelsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsRowHandle MakeLiteralFeatureLevels(FFeatureLevelsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFeatureLevelsEnum A, FFeatureLevelsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFeatureLevelsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFeatureLevelsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsEnum RowHandleToStruct(FFeatureLevelsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFeatureLevelsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFeatureLevelsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsRowHandle StructToRowHandle(FFeatureLevelsEnum EnumValue);  // parameters 0x28
};
