// /Script/Engine.BlueprintInputKeyDelegateBinding
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h

USTRUCT()
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
    UPROPERTY() FInputChord InputChord;  // 0x0008, size 0x20
    UPROPERTY() TEnumAsByte<EInputEvent> InputKeyEvent;  // 0x0028, size 0x1
    UPROPERTY() FName FunctionNameToBind;  // 0x002C, size 0x8
};
