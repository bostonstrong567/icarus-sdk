// /Script/AIModule.BTDecorator_BlackboardBase
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_BlackboardBase.h

UCLASS(Abstract)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKey;  // 0x0068, size 0x28

    // Virtual functions that start here:
    //   OnBlackboardKeyValueChange
};
