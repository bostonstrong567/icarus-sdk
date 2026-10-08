// /Script/Icarus.AnimNotify_PlayNiagaraEffectOnSurface
// Derives from: UAnimNotify_PlayNiagaraEffect > UAnimNotify > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Animation/AnimNotify_PlayNiagaraEffectOnSurface.h

UCLASS(Const)
class UAnimNotify_PlayNiagaraEffectOnSurface : public UAnimNotify_PlayNiagaraEffect
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TraceDistance;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionChannel> TraceChannel;  // 0x0094, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<AActor> ActorClassFilter;  // 0x0098, size 0x28
};
