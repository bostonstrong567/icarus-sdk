// /Script/AIModule.BTDecorator_IsBBEntryOfClass
// Derives from: UBTDecorator_BlackboardBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h

UCLASS()
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) TSubclassOf<UObject> TestClass;  // 0x0090, size 0x8
};
