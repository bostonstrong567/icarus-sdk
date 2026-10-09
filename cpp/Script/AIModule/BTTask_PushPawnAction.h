// /Script/AIModule.BTTask_PushPawnAction
// Derives from: UBTTask_PawnActionBase > UBTTaskNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h

UCLASS()
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Instanced) UPawnAction* Action;  // 0x0070, size 0x8
};
