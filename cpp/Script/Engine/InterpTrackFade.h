// /Script/Engine.InterpTrackFade
// Derives from: UInterpTrackFloatBase > UInterpTrack > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackFade.h

UCLASS()
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
    UPROPERTY(EditAnywhere) uint8 bPersistFade : 1;  // 0x0090, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bFadeAudio : 1;  // 0x0090, mask 0x02
    UPROPERTY(EditAnywhere) FLinearColor FadeColor;  // 0x0094, size 0x10
};
