// /Script/Engine.InterpTrackVisibility
// Derives from: UInterpTrack > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackVisibility.h

UCLASS(MinimalAPI)
class UInterpTrackVisibility : public UInterpTrack
{
public:
    UPROPERTY() TArray<FVisibilityTrackKey> VisibilityTrack;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenForwards : 1;  // 0x0080, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenBackwards : 1;  // 0x0080, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenJumpingForwards : 1;  // 0x0080, mask 0x04
};
