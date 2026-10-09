// /Script/UMG.BlueprintWidgetAnimationDelegateBinding
// size 0x1C, declared in Engine/Source/Runtime/UMG/Public/Animation/WidgetAnimationDelegateBinding.h

USTRUCT()
struct FBlueprintWidgetAnimationDelegateBinding
{
public:
    UPROPERTY() EWidgetAnimationEvent Action;  // 0x0000, size 0x1
    UPROPERTY() FName AnimationToBind;  // 0x0004, size 0x8
    UPROPERTY() FName FunctionNameToBind;  // 0x000C, size 0x8
    UPROPERTY() FName UserTag;  // 0x0014, size 0x8
};
