// /Script/AIModule.BTDecorator_TimeLimit
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h

UCLASS()
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) float TimeLimit;  // 0x0068, size 0x4
};
