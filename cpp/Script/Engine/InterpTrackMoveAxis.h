// /Script/Engine.InterpTrackMoveAxis
// Derives from: UInterpTrackFloatBase > UInterpTrack > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackMoveAxis.h

UCLASS(MinimalAPI)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
    UPROPERTY() TEnumAsByte<EInterpMoveAxis> MoveAxis;  // 0x0090, size 0x1
    UPROPERTY() FInterpLookupTrack LookupTrack;  // 0x0098, size 0x10
};
