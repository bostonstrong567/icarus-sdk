// /Script/Engine.AnimNotify_PlaySound
// Derives from: UAnimNotify > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h

UCLASS(Const, Config=Game)
class UAnimNotify_PlaySound : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USoundBase* Sound;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VolumeMultiplier;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float PitchMultiplier;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bFollow : 1;  // 0x0048, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName AttachName;  // 0x004C, size 0x8
};
