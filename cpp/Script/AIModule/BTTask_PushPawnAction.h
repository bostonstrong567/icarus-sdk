// /Script/AIModule.BTTask_PushPawnAction
// Derives from: UBTTask_PawnActionBase > UBTTaskNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h

UCLASS()
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
    UPROPERTY(EditAnywhere, Instanced) UPawnAction* Action;  // 0x0070, size 0x8
};
