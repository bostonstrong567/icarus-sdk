// /Script/Engine.DataTableFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h

UCLASS()
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool DoesDataTableRowExist(UDataTable* Table, FName RowName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult>& OutResult, float& OutXY, FString ContextString);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FString> GetDataTableColumnAsString(UDataTable* DataTable, FName PropertyName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void GetDataTableRowNames(UDataTable* Table, TArray<FName>& OutRowNames);  // parameters 0x18
};
