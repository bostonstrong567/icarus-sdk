// /Script/AIModule.BTTask_WaitBlackboardTime
// Derives from: UBTTask_Wait > UBTTaskNode > UBTNode > UObject
// size 0xA0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h

UCLASS()
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKey;  // 0x0078, size 0x28
};
