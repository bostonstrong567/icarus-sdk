// /Script/AIModule.BTCompositeChild
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h

USTRUCT()
struct FBTCompositeChild
{
public:
    UPROPERTY() UBTCompositeNode* ChildComposite;  // 0x0000, size 0x8
    UPROPERTY() UBTTaskNode* ChildTask;  // 0x0008, size 0x8
    UPROPERTY() TArray<UBTDecorator*> Decorators;  // 0x0010, size 0x10
    UPROPERTY() TArray<FBTDecoratorLogic> DecoratorOps;  // 0x0020, size 0x10
};
