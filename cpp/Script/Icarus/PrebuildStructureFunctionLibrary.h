// /Script/Icarus.PrebuildStructureFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Prebuilt/PrebuiltStructureFunctionLibrary.h

UCLASS()
class UPrebuildStructureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FString GetSaveStructureString(FString FileName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FString> GetSavedStructureFiles();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FSerializedStructure LoadStructure(FString FileName);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static FSerializedStructure LoadStructureFromString(FString JsonString);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void SaveStructure(FString FileName, UObject* WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SaveStructureRecorders(FString FileName, UObject* WorldContext);  // parameters 0x18
};
