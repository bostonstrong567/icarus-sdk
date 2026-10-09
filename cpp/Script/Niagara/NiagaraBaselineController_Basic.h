// /Script/Niagara.NiagaraBaselineController_Basic
// Derives from: UNiagaraBaselineController > UObject
// size 0x80, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPerfBaseline.h

UCLASS(EditInlineNew)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) int32 NumInstances;  // 0x0068, size 0x4
    UPROPERTY() TArray<UNiagaraComponent*> SpawnedComponents;  // 0x0070, size 0x10
};
