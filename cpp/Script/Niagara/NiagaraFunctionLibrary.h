// /Script/Niagara.NiagaraFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h

UCLASS()
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, USkeletalMeshComponent* SkeletalMeshComponent);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMesh* StaticMesh);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMeshComponent* StaticMeshComponent);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetSkeletalMeshDataInterfaceSamplingRegions(UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& SamplingRegions);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void SetTexture2DArrayObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture2DArray* Texture);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture* Texture);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UVolumeTexture* Texture);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UNiagaraComponent* SpawnSystemAtLocation(UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static UNiagaraComponent* SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);  // parameters 0x40
};
