// /Script/Engine.BlueprintInputTouchDelegateBinding
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h

USTRUCT()
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
    UPROPERTY() TEnumAsByte<EInputEvent> InputKeyEvent;  // 0x0004, size 0x1
    UPROPERTY() FName FunctionNameToBind;  // 0x0008, size 0x8
};
