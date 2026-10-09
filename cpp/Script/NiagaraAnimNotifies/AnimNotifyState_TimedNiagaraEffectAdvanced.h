// /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Derives from: UAnimNotifyState_TimedNiagaraEffect > UAnimNotifyState > UObject
// size 0xB0, declared in Engine/Plugins/FX/Niagara/Source/NiagaraAnimNotifies/Public/AnimNotifyState_TimedNiagaraEffect.h

UCLASS(Const, EditInlineNew)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
protected:
    TMap<UMeshComponent *,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent *,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0> > ProgressInfoMap;  // 0x0060, not reflected
public:
    UFUNCTION(BlueprintCallable) float GetNotifyProgress(UMeshComponent* MeshComp) const;  // parameters 0xC
};
