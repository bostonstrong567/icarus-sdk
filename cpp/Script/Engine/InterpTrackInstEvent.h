// /Script/Engine.InterpTrackInstEvent
// Derives from: UInterpTrackInst > UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstEvent.h

UCLASS(MinimalAPI)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
    UPROPERTY() float LastUpdatePosition;  // 0x0028, size 0x4
};
