// /Script/Icarus.BuildingFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Building/BuildingFunctionLibrary.h

UCLASS()
class UBuildingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static TArray<FVectorPair> AddReverseLinesToVectorPairArray(const TArray<FVectorPair>& VectorPairs);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FBuildingPiecesRowHandle GetBuildingUpgrade(ABuildingBase* Building, FBuildingTypesEnum Type);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static int32 GetBuildingVariation(ABuildingBase* Building);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static TMap<int32, TSoftObjectPtr<UMaterialInterface>> GetMaterialOverridesForBuilding(ABuildingBase* Building, EBuildingMeshType InMeshType, bool& bHasOverrideMaterials);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static TMap<int32, TSoftObjectPtr<UMaterialInterface>> GetMaterialOverridesForBuildingVariation(const FBuildableData& BuildableData, int32 Variation, EBuildingMeshType InMeshType, bool& bHasOverrideMaterials);  // parameters 0x110
    UFUNCTION(BlueprintCallable) static FVector RoundVector(FVector Input);  // parameters 0x18
};
