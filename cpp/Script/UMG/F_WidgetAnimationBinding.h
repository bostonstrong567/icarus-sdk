// /Script/UMG.WidgetAnimationBinding
// size 0x24, declared in Engine/Source/Runtime/UMG/Public/Animation/WidgetAnimationBinding.h

USTRUCT()
struct FWidgetAnimationBinding
{
public:
    UPROPERTY() FName WidgetName;  // 0x0000, size 0x8
    UPROPERTY() FName SlotWidgetName;  // 0x0008, size 0x8
    UPROPERTY() FGuid AnimationGuid;  // 0x0010, size 0x10
    UPROPERTY() bool bIsRootWidget;  // 0x0020, size 0x1
};
