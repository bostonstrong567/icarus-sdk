// /Script/AIModule.BTDecorator_CompareBBEntries
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h

UCLASS()
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EBlackBoardEntryComparison> Operator;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKeyA;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKeyB;  // 0x0098, size 0x28

    // Virtual functions that start here:
    //   OnBlackboardKeyValueChange
};
