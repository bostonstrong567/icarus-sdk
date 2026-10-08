// /Script/Engine.RotatingMovementComponent
// Derives from: UMovementComponent > UActorComponent > UObject
// size 0x110, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RotatingMovementComponent.h

UCLASS(Config=Engine)
class URotatingMovementComponent : public UMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator RotationRate;  // 0x00F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PivotTranslation;  // 0x00FC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRotationInLocalSpace : 1;  // 0x0108, mask 0x01
};
