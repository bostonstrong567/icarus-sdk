// /Game/BP/MiscConstructs/BP_DeployableFunctionLibrary.BP_DeployableFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_DeployableFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetDeployableVariationClass(FItemData Item, int32 Variation, UObject* __WorldContext, TSubclassOf<AIcarusItem>& AsIcarus_Item);  // parameters 0x208
    UFUNCTION(BlueprintCallable) static void SpawnDeployable(FItemData Item, FTransform Transform, UObject* __WorldContext, ABP_DeployableBase_C*& Deployable);  // parameters 0x230
    UFUNCTION(BlueprintCallable) static void SpawnDeployablePersistent(FItemData Item, FString Name, FQuestQueriesRowHandle Location, UObject* __WorldContext, ABP_DeployableBase_C*& Deployable);  // parameters 0x228
};
