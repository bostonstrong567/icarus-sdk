// /Script/Engine.AnimNotify_PlayParticleEffect
// Derives from: UAnimNotify > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h

UCLASS(Const)
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UParticleSystem* PSTemplate;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector LocationOffset;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator RotationOffset;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere) FVector Scale;  // 0x0058, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 Attached : 1;  // 0x0080, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SocketName;  // 0x0084, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FQuat RotationOffsetQuat;  // 0x0070, private

    // Virtual functions that start here:
    //   SpawnParticleSystem
};
