// /Script/Icarus.AnimNotify_IcarusPlaySound
// Derives from: UAnimNotify > UObject
// size 0x58, declared in Icarus/Source/Icarus/Audio/AnimNotifies/AnimNotify_IcarusPlaySound.h

UCLASS(Const)
class UAnimNotify_IcarusPlaySound : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFollow;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName AttachSocket;  // 0x0044, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseListenerRotation;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseOcclusion;  // 0x004D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName OcclusionTrace;  // 0x0050, size 0x8
};
