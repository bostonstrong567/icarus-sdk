// /Script/Icarus.GameplayConfigLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GameplayConfig/GameplayConfigLibrary.h

UCLASS()
class UGameplayConfigLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToGameplayConfigTable(FName Name, FGameplayConfig Data, FGameplayConfigRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGameplayConfigEnum(FGameplayConfigEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGameplayConfigRowHandle CastToGameplayConfigRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGameplayConfigEnum A, FGameplayConfigEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGameplayConfigRowHandleFGameplayConfigRowHandle(FGameplayConfigRowHandle RowHandleA, FGameplayConfigRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGameplayConfigStruct(FGameplayConfigRowHandle RowHandle, FGameplayConfig& GameplayConfig, EValid& Paths);  // parameters 0x39
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigRowHandle MakeGameplayConfig(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigEnum MakeGameplayConfigEnum(FGameplayConfigEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigRowHandle MakeGameplayConfigFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigRowHandle MakeLiteralGameplayConfig(FGameplayConfigRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGameplayConfigEnum A, FGameplayConfigEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGameplayConfigEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGameplayConfigTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigEnum RowHandleToStruct(FGameplayConfigRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGameplayConfigEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGameplayConfigEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayConfigRowHandle StructToRowHandle(FGameplayConfigEnum EnumValue);  // parameters 0x28
};
