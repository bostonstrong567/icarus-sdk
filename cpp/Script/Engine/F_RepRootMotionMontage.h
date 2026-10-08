// /Script/Engine.RepRootMotionMontage
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/Character.h

USTRUCT()
struct FRepRootMotionMontage
{
    UPROPERTY() bool bIsActive;  // 0x0000, size 0x1
    UPROPERTY() UAnimMontage* AnimMontage;  // 0x0008, size 0x8
    UPROPERTY() float Position;  // 0x0010, size 0x4
    UPROPERTY() FVector_NetQuantize100 Location;  // 0x0014, size 0xC
    UPROPERTY() FRotator Rotation;  // 0x0020, size 0xC
    UPROPERTY(Instanced) UPrimitiveComponent* MovementBase;  // 0x0030, size 0x8
    UPROPERTY() FName MovementBaseBoneName;  // 0x0038, size 0x8
    UPROPERTY() bool bRelativePosition;  // 0x0040, size 0x1
    UPROPERTY() bool bRelativeRotation;  // 0x0041, size 0x1
    UPROPERTY() FRootMotionSourceGroup AuthoritativeRootMotion;  // 0x0048, size 0x38
    UPROPERTY() FVector_NetQuantize10 Acceleration;  // 0x0080, size 0xC
    UPROPERTY() FVector_NetQuantize10 LinearVelocity;  // 0x008C, size 0xC
};
