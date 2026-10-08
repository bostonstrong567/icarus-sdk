// /Script/Engine.InterpTrackSound
// Derives from: UInterpTrackVectorBase > UInterpTrack > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackSound.h

UCLASS(MinimalAPI)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
    UPROPERTY() TArray<FSoundTrackKey> Sounds;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) uint8 bPlayOnReverse : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bContinueSoundOnMatineeEnd : 1;  // 0x00A0, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSuppressSubtitles : 1;  // 0x00A0, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bTreatAsDialogue : 1;  // 0x00A0, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bAttach : 1;  // 0x00A0, mask 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bPlaying;  // 0x00A0
};
