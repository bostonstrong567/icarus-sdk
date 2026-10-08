// /Script/Engine.RootMotionSource_ConstantForce
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
    UPROPERTY() FVector Force;  // 0x0098, size 0xC
    UPROPERTY() UCurveFloat* StrengthOverTime;  // 0x00A8, size 0x8
};
