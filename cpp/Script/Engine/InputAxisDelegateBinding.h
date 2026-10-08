// /Script/Engine.InputAxisDelegateBinding
// Derives from: UInputDelegateBinding > UDynamicBlueprintBinding > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h

UCLASS()
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
    UPROPERTY() TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;  // 0x0028, size 0x10
};
