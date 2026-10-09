// /Script/Engine.BlueprintInputDelegateBinding
// size 0x4, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputDelegateBinding.h

USTRUCT()
struct FBlueprintInputDelegateBinding
{
public:
    UPROPERTY() uint8 bConsumeInput : 1;  // 0x0000, mask 0x01
    UPROPERTY() uint8 bExecuteWhenPaused : 1;  // 0x0000, mask 0x02
    UPROPERTY() uint8 bOverrideParentBinding : 1;  // 0x0000, mask 0x04
};
