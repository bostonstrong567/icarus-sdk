// /Game/BP/Utilities/WT/Tech/BP_WaterfallFunctionLibrary.BP_WaterfallFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WaterfallFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GetWaterfallMaterialOverrides(bool IsLava, bool UseCalmVariant, bool UseOverride, UMaterialInstance* OverrideMaterial, UObject* __WorldContext, UMaterialInstance*& MaterialOverride, TArray<UMaterialInstance*>& MaterialOverrideArray);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetWaterfallStaticMesh(bool IsLava, int32 MeshTypeIndex, UObject* __WorldContext, UStaticMesh*& Mesh);  // parameters 0x18
};
