// /Script/UMG.AnimationEventBinding
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h

USTRUCT()
struct FAnimationEventBinding
{
    UPROPERTY() UWidgetAnimation* Animation;  // 0x0000, size 0x8
    UPROPERTY() FWidgetAnimationDynamicEvent Delegate;  // 0x0008, size 0x10
    UPROPERTY() EWidgetAnimationEvent AnimationEvent;  // 0x0018, size 0x1
    UPROPERTY() FName UserTag;  // 0x001C, size 0x8
};
