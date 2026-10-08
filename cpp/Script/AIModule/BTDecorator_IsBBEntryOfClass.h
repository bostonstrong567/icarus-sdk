// /Script/AIModule.BTDecorator_IsBBEntryOfClass
// Derives from: UBTDecorator_BlackboardBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h

UCLASS()
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UObject> TestClass;  // 0x0090, size 0x8
};
