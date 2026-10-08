// /Script/Engine.ComponentDelegateBinding
// Derives from: UDynamicBlueprintBinding > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h

UCLASS()
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
    UPROPERTY() TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings;  // 0x0028, size 0x10
};
