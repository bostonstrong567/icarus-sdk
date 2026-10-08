// /Script/Engine.InputKeyDelegateBinding
// Derives from: UInputDelegateBinding > UDynamicBlueprintBinding > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h

UCLASS()
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
    UPROPERTY() TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;  // 0x0028, size 0x10
};
