// /Script/Icarus.AnimNotifyState_IcarusPlaySoundContinuous
// Derives from: UAnimNotifyState > UObject
// size 0x58, declared in Icarus/Source/Icarus/Audio/AnimNotifies/AnimNotifyState_IcarusPlaySoundContinuous.h

UCLASS(Const, EditInlineNew)
class UAnimNotifyState_IcarusPlaySoundContinuous : public UAnimNotifyState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName AttachSocket;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseListenerRotation;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseOcclusion;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName OcclusionTrace;  // 0x0044, size 0x8
    UPROPERTY(Transient, Instanced) UFMODAudioComponent* AudioComponent;  // 0x0050, size 0x8
};
