// /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Derives from: UAnimNotify > UObject
// size 0x90, declared in Engine/Plugins/FX/Niagara/Source/NiagaraAnimNotifies/Public/AnimNotify_PlayNiagaraEffect.h

UCLASS(Const)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UNiagaraSystem* Template;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector LocationOffset;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator RotationOffset;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere) FVector Scale;  // 0x0058, size 0xC
    UPROPERTY(EditAnywhere) bool bAbsoluteScale;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 Attached : 1;  // 0x0080, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SocketName;  // 0x0084, size 0x8
protected:
    UFXSystemComponent * SpawnedEffect;  // 0x0068, not reflected
    FQuat RotationOffsetQuat;  // 0x0070, not reflected
public:
    UFUNCTION(BlueprintCallable) UFXSystemComponent* GetSpawnedEffect() const;  // parameters 0x8

    // Virtual functions that start here:
    //   SpawnEffect
};
