// /Script/SubstanceCore.SubstanceUtility
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceUtility.h

UCLASS(MinimalAPI)
class USubstanceUtility : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AsyncRendering(USubstanceGraphInstance* InstancesToRender);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ClearCache();
    UFUNCTION(BlueprintCallable) static void CopyInputParameters(USubstanceGraphInstance* SourceGraphInstance, USubstanceGraphInstance* DestGraphInstance);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static USubstanceInstanceFactory* CreateAggregateSubstanceFactory(USubstanceInstanceFactory* OutputFactory, int32 OutputFactoryGraphIndex, USubstanceInstanceFactory* InputFactory, int32 InputFactoryGraphIndex, const TArray<FSubstanceConnection>& Connections);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static USubstanceGraphInstance* CreateGraphInstance(UObject* WorldContextObject, USubstanceInstanceFactory* Factory, int32 GraphDescIndex, UMaterial* ParentMaterial, FString InstanceName);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void DisableInstanceOutputs(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance, TArray<int32> OutputIndices);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static USubstanceGraphInstance* DuplicateGraphInstance(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void EnableInstanceOutputs(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance, TArray<int32> OutputIndices);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FString GetFactoryName(USubstanceGraphInstance* GraphInstance);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FString GetGraphName(USubstanceGraphInstance* GraphInstance);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<UMaterial*> GetSubstanceIncludedMaterials();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static float GetSubstanceLoadingProgress();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static TArray<UTexture2D*> GetSubstanceTextures(USubstanceGraphInstance* GraphInstance);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<USubstanceGraphInstance*> GetSubstances(UMaterialInterface* Material);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void ResetInputParameters(USubstanceGraphInstance* GraphInstance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void SetGraphInstanceOutputSize(USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static void SetGraphInstanceOutputSizeInt(USubstanceGraphInstance* GraphInstance, int32 Width, int32 Height);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SyncRendering(USubstanceGraphInstance* InstancesToRender);  // parameters 0x8
};
