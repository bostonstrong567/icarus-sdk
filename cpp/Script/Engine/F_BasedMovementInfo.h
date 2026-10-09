// /Script/Engine.BasedMovementInfo
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/Character.h

USTRUCT()
struct FBasedMovementInfo
{
public:
    UPROPERTY(Instanced) UPrimitiveComponent* MovementBase;  // 0x0000, size 0x8
    UPROPERTY() FName BoneName;  // 0x0008, size 0x8
    UPROPERTY() FVector_NetQuantize100 Location;  // 0x0010, size 0xC
    UPROPERTY() FRotator Rotation;  // 0x001C, size 0xC
    UPROPERTY() bool bServerHasBaseComponent;  // 0x0028, size 0x1
    UPROPERTY() bool bRelativeRotation;  // 0x0029, size 0x1
    UPROPERTY() bool bServerHasVelocity;  // 0x002A, size 0x1
};
