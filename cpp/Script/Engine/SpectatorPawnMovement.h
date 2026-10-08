// /Script/Engine.SpectatorPawnMovement
// Derives from: UFloatingPawnMovement > UPawnMovementComponent > UNavMovementComponent > UMovementComponent > UActorComponent > UObject
// size 0x158, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h

UCLASS(Config=Engine)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
    UPROPERTY() uint8 bIgnoreTimeDilation : 1;  // 0x0150, mask 0x01
};
