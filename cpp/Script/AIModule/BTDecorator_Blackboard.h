// /Script/AIModule.BTDecorator_Blackboard
// Derives from: UBTDecorator_BlackboardBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h

UCLASS()
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) int32 IntValue;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) float FloatValue;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere) FString StringValue;  // 0x0098, size 0x10
    UPROPERTY() FString CachedDescription;  // 0x00A8, size 0x10
    UPROPERTY() uint8 OperationType;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBTBlackboardRestart> NotifyObserver;  // 0x00B9, size 0x1
};
