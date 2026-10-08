// /Script/Icarus.IcarusParticleSystemFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Particles/IcarusParticleSystemFunctionLibrary.h

UCLASS()
class UIcarusParticleSystemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static UNiagaraComponent* SpawnReplicatedNiagaraSystemAtLocation(UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, USceneComponent* TargetComponent, FName TargetSocket, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static UNiagaraComponent* SpawnReplicatedNiagaraSystemAtLocationWithCustomContext(UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, USceneComponent* TargetComponent, FName TargetSocket, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);  // parameters 0x58
};
