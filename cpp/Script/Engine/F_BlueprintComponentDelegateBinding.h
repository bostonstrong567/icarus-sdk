// /Script/Engine.BlueprintComponentDelegateBinding
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h

USTRUCT()
struct FBlueprintComponentDelegateBinding
{
public:
    UPROPERTY() FName ComponentPropertyName;  // 0x0000, size 0x8
    UPROPERTY() FName DelegatePropertyName;  // 0x0008, size 0x8
    UPROPERTY() FName FunctionNameToBind;  // 0x0010, size 0x8
};
