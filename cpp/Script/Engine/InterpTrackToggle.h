// /Script/Engine.InterpTrackToggle
// Derives from: UInterpTrack > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackToggle.h

UCLASS(MinimalAPI)
class UInterpTrackToggle : public UInterpTrack
{
public:
    UPROPERTY() TArray<FToggleTrackKey> ToggleTrack;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) uint8 bActivateSystemEachUpdate : 1;  // 0x0080, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bActivateWithJustAttachedFlag : 1;  // 0x0080, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenForwards : 1;  // 0x0080, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenBackwards : 1;  // 0x0080, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenJumpingForwards : 1;  // 0x0080, mask 0x10
};
