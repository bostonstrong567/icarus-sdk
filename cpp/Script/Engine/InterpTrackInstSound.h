// /Script/Engine.InterpTrackInstSound
// Derives from: UInterpTrackInst > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstSound.h

UCLASS()
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
    UPROPERTY() float LastUpdatePosition;  // 0x0028, size 0x4
    UPROPERTY(Transient, Instanced) UAudioComponent* PlayAudioComp;  // 0x0030, size 0x8
};
