// /Script/Engine.BlueprintInputAxisDelegateBinding
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h

USTRUCT()
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
    UPROPERTY() FName InputAxisName;  // 0x0004, size 0x8
    UPROPERTY() FName FunctionNameToBind;  // 0x000C, size 0x8
};
