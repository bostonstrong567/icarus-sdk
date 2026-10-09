// /Script/AIModule.BTDecoratorLogic
// size 0x4, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h

USTRUCT()
struct FBTDecoratorLogic
{
public:
    UPROPERTY() TEnumAsByte<EBTDecoratorLogic> Operation;  // 0x0000, size 0x1
    UPROPERTY() uint16 Number;  // 0x0002, size 0x2
};
