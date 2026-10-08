// /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Derives from: UAnimNotifyState > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/NiagaraAnimNotifies/Public/AnimNotifyState_TimedNiagaraEffect.h

UCLASS(Const, EditInlineNew)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
    UPROPERTY(EditAnywhere) UNiagaraSystem* Template;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FName SocketName;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FVector LocationOffset;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere) FRotator RotationOffset;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere) bool bDestroyAtEnd;  // 0x0058, size 0x1

    UFUNCTION(BlueprintCallable) UFXSystemComponent* GetSpawnedEffect(UMeshComponent* MeshComp) const;  // parameters 0x10

    // Virtual functions that start here:
    //   SpawnEffect
};
