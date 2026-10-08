// /Script/Icarus.WorldResourceFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/World/WorldResourceFunctionLibrary.h

UCLASS()
class UWorldResourceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static int32 GetMaxVoxelResourceAroundLocation(UObject* WorldContextObject, FVector WorldLocation, float Radius, bool bUseInitialResourceValues);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool GetNearbyVoxelResources(UObject* WorldContextObject, FVector WorldLocation, TArray<AVoxelResource*>& FoundVoxels, float Radius, bool bIncludeFullyMined);  // parameters 0x2E
    UFUNCTION(BlueprintCallable) static int32 GetTotalConsumedVoxelResourceAroundLocation(UObject* WorldContextObject, FVector WorldLocation, int32& VoxelNodeCount, float Radius, bool bOnlyVoxelsSupportingReinit);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void RegenerateVoxelsAroundLocation(UObject* WorldContextObject, FVector WorldLocation, float Radius, bool bReRollVoxels);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void TryGrantCoalToPlayer(int32 AmountOfWood, AIcarusPlayerCharacter* TargetPlayer, FItemTemplateRowHandle CoalOreTemplate);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void TryGrantInfectedBarkToPlayer(int32 AmountOfWood, AIcarusPlayerCharacter* TargetPlayer, FItemTemplateRowHandle InfectedBarkItemTemplate);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static int32 TryGrantNaturalResourcesToPlayer(int32 AmountOfWood, AIcarusPlayerCharacter* TargetPlayer, FItemTemplateRowHandle ResinTemplate, FItemTemplateRowHandle SapTemplate);  // parameters 0x44
    UFUNCTION(BlueprintCallable) static void TryGrantRefinedWoodToPlayer(int32 AmountOfWood, AIcarusPlayerCharacter* TargetPlayer, FItemTemplateRowHandle RefinedWoodTemplate);  // parameters 0x28
};
