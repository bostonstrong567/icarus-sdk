// /Script/AIModule.BTTask_Wait
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_Wait.h

UCLASS()
class UBTTask_Wait : public UBTTaskNode
{
public:
    UPROPERTY(EditAnywhere) float WaitTime;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere) float RandomDeviation;  // 0x0074, size 0x4
};
