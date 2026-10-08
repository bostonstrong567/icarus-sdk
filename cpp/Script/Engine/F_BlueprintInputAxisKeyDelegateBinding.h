// /Script/Engine.BlueprintInputAxisKeyDelegateBinding
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h

USTRUCT()
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
    UPROPERTY() FKey AxisKey;  // 0x0008, size 0x18
    UPROPERTY() FName FunctionNameToBind;  // 0x0020, size 0x8
};
