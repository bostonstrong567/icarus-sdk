// /Script/Icarus.BestiaryFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Bestiary/BestiaryFunctionLibrary.h

UCLASS()
class UBestiaryFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static TArray<FBestiaryDataRowHandle> GetAllBeastsOrderedForBestiary(UObject* WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<FFishDataRowHandle> GetAllFishOrderedForBestiary(UObject* WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TMap<FTerrainsRowHandle, FBestiaryCategory> GetBestiaryCategories(UObject* WorldContext);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static TMap<EFishType, FFishCategory> GetFishingCategories(UObject* WorldContext);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static UBestiaryManagerComponent* GetLocalBestiaryManagerComponent(UObject* WorldContext);  // parameters 0x10
};
