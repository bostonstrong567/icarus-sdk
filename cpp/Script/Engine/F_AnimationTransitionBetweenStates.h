// /Script/Engine.AnimationTransitionBetweenStates
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h

USTRUCT()
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
    UPROPERTY() int32 PreviousState;  // 0x0008, size 0x4
    UPROPERTY() int32 NextState;  // 0x000C, size 0x4
    UPROPERTY() float CrossfadeDuration;  // 0x0010, size 0x4
    UPROPERTY() int32 StartNotify;  // 0x0014, size 0x4
    UPROPERTY() int32 EndNotify;  // 0x0018, size 0x4
    UPROPERTY() int32 InterruptNotify;  // 0x001C, size 0x4
    UPROPERTY() EAlphaBlendOption BlendMode;  // 0x0020, size 0x1
    UPROPERTY() UCurveFloat* CustomCurve;  // 0x0028, size 0x8
    UPROPERTY() UBlendProfile* BlendProfile;  // 0x0030, size 0x8
    UPROPERTY() TEnumAsByte<ETransitionLogicType> LogicType;  // 0x0038, size 0x1
};
