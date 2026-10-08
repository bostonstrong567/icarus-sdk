// /Script/InteractiveToolsFramework.InputBehaviorSet
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputBehaviorSet.h

UCLASS(Transient)
class UInputBehaviorSet : public UObject
{
public:
    UPROPERTY() TArray<FBehaviorInfo> Behaviors;  // 0x0028, size 0x10

    // Virtual functions that start here:
    //   Add, BehaviorsModified, CollectWantsCapture, CollectWantsHoverCapture, IsEmpty, Remove, RemoveAll
    //   RemoveByGroup, RemoveBySource
};
