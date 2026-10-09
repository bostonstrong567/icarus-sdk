// /Script/AIModule.BTTask_GameplayTaskBase
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h

UCLASS(Abstract)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) uint8 bWaitForGameplayTask : 1;  // 0x0070, mask 0x01

    // Virtual functions that start here:
    //   DetermineGameplayTaskResult
};
