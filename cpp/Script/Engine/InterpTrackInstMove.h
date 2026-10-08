// /Script/Engine.InterpTrackInstMove
// Derives from: UInterpTrackInst > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h

UCLASS(MinimalAPI)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
    UPROPERTY() FVector ResetLocation;  // 0x0028, size 0xC
    UPROPERTY() FRotator ResetRotation;  // 0x0034, size 0xC
};
