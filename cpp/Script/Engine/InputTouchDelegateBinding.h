// /Script/Engine.InputTouchDelegateBinding
// Derives from: UInputDelegateBinding > UDynamicBlueprintBinding > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h

UCLASS()
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
    UPROPERTY() TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;  // 0x0028, size 0x10
};
