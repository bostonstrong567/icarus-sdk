// /Script/AIModule.BehaviorTree
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h

UCLASS()
class UBehaviorTree : public UObject, public IBlackboardAssetProvider
{
public:
    UPROPERTY() UBTCompositeNode* RootNode;  // 0x0030, size 0x8
    UPROPERTY() UBlackboardData* BlackboardAsset;  // 0x0038, size 0x8
    UPROPERTY() TArray<UBTDecorator*> RootDecorators;  // 0x0040, size 0x10
    UPROPERTY() TArray<FBTDecoratorLogic> RootDecoratorOps;  // 0x0050, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint16 InstanceMemorySize;  // 0x0060
};
