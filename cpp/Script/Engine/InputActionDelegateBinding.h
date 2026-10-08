// /Script/Engine.InputActionDelegateBinding
// Derives from: UInputDelegateBinding > UDynamicBlueprintBinding > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h

UCLASS()
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
    UPROPERTY() TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;  // 0x0028, size 0x10
};
