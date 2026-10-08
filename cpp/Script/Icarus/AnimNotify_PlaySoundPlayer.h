// /Script/Icarus.AnimNotify_PlaySoundPlayer
// Derives from: UAnimNotify > UObject
// size 0x50, declared in Icarus/Source/Icarus/Audio/AnimNotifies/AnimNotify_PlaySoundPlayer.h

UCLASS(Const)
class UAnimNotify_PlaySoundPlayer : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseItemAnimData;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ItemAnimName;  // 0x0044, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ItemAnimIndex;  // 0x004C, size 0x4

    UFUNCTION(BlueprintCallable) UFMODEvent* GetFMODEvent(AIcarusPlayerCharacter* PlayerCharacter) const;  // parameters 0x10
};
