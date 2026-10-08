// /Script/Icarus.NPCNameFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Settlement/SettlementNPCNames.h

UCLASS()
class UNPCNameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TArray<FString> GatherUsedSettlementNPCNames(UObject* WorldContextObject);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FText GetRandomNPCBackground(float OptionalSeed);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FText GetRandomNPCName(ENPCNameGender Gender, const TArray<FString>& ExcludeNames);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FText GetRandomNPCNameAnyGender(const TArray<FString>& ExcludeNames);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FNPCBackgroundList LoadNPCBackgrounds();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FNPCNameList LoadNPCNames();  // parameters 0x30
};
