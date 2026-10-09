// /Script/IcarusUtilities.RowLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/IcarusUtilities/Public/RowLibrary.h

UCLASS()
class URowLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRowHandleFRowHandle(FRowHandle RowHandleA, FRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static UIcarusDataTable* GetDataTable(FRowHandle RowHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static UIcarusDataTable* GetDataTableForEdit(FRowHandle RowHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetDataTableName(FRowHandle RowHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFeatureLevelsRowHandle GetFeatureLevel(FRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRowMetadata GetMetadata(FRowHandle RowHandle);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) static int32 GetRowIndex(const FRowHandle& Row);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRowEnumNone(const FRowEnum& Enum);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRowEnumValid(const FRowEnum& Enum);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRowHandleNone(const FRowHandle& RowHandle);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRowHandleValid(const FRowHandle& RowHandle);  // parameters 0x19
};
