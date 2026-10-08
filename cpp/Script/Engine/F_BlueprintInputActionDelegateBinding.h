// /Script/Engine.BlueprintInputActionDelegateBinding
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h

USTRUCT()
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
    UPROPERTY() FName InputActionName;  // 0x0004, size 0x8
    UPROPERTY() TEnumAsByte<EInputEvent> InputKeyEvent;  // 0x000C, size 0x1
    UPROPERTY() FName FunctionNameToBind;  // 0x0010, size 0x8
};
