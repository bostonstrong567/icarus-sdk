// /Script/Engine.AnimNotifyState_TimedParticleEffect
// Derives from: UAnimNotifyState > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h

UCLASS(Const, EditInlineNew)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
    UPROPERTY(EditAnywhere) UParticleSystem* PSTemplate;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FName SocketName;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FVector LocationOffset;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere) FRotator RotationOffset;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere) bool bDestroyAtEnd;  // 0x0058, size 0x1
};
