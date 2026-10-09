// /Script/Engine.KismetStringTableLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetStringTableLibrary.h

UCLASS()
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetKeysFromStringTable(FName TableId);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FName> GetMetaDataIdsFromStringTableEntry(FName TableId, FString Key);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FName> GetRegisteredStringTables();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetTableEntryMetaData(FName TableId, FString Key, FName MetaDataId);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetTableEntrySourceString(FName TableId, FString Key);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetTableNamespace(FName TableId);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRegisteredTableEntry(FName TableId, FString Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRegisteredTableId(FName TableId);  // parameters 0x9
};
