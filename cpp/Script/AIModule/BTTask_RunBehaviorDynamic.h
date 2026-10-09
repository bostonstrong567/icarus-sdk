// /Script/AIModule.BTTask_RunBehaviorDynamic
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x88, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h

UCLASS()
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FGameplayTag InjectionTag;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere) UBehaviorTree* DefaultBehaviorAsset;  // 0x0078, size 0x8
    UPROPERTY() UBehaviorTree* BehaviorAsset;  // 0x0080, size 0x8

    // Virtual functions that start here:
    //   OnSubtreeDeactivated
};
