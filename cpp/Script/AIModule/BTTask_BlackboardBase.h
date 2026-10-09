// /Script/AIModule.BTTask_BlackboardBase
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h

UCLASS(Abstract)
class UBTTask_BlackboardBase : public UBTTaskNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKey;  // 0x0070, size 0x28
};
