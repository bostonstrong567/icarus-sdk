// /Script/Engine.RootMotionSource_RadialForce
// size 0xE0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
    UPROPERTY() FVector Location;  // 0x0098, size 0xC
    UPROPERTY() AActor* LocationActor;  // 0x00A8, size 0x8
    UPROPERTY() float Radius;  // 0x00B0, size 0x4
    UPROPERTY() float Strength;  // 0x00B4, size 0x4
    UPROPERTY() bool bIsPush;  // 0x00B8, size 0x1
    UPROPERTY() bool bNoZForce;  // 0x00B9, size 0x1
    UPROPERTY() UCurveFloat* StrengthDistanceFalloff;  // 0x00C0, size 0x8
    UPROPERTY() UCurveFloat* StrengthOverTime;  // 0x00C8, size 0x8
    UPROPERTY() bool bUseFixedWorldDirection;  // 0x00D0, size 0x1
    UPROPERTY() FRotator FixedWorldDirection;  // 0x00D4, size 0xC
};
