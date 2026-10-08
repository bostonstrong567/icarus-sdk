// /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Derives from: UAnimNotifyState_TimedNiagaraEffect > UAnimNotifyState > UObject
// size 0xB0, declared in Engine/Plugins/FX/Niagara/Source/NiagaraAnimNotifies/Public/AnimNotifyState_TimedNiagaraEffect.h

UCLASS(Const, EditInlineNew)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<UMeshComponent *,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent *,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0> > ProgressInfoMap;  // 0x0060, protected

    UFUNCTION(BlueprintCallable) float GetNotifyProgress(UMeshComponent* MeshComp) const;  // parameters 0xC
};
