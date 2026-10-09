// /Script/AIModule.BehaviorTreeTemplateInfo
// size 0x18, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h

USTRUCT()
struct FBehaviorTreeTemplateInfo
{
public:
    UPROPERTY() UBehaviorTree* Asset;  // 0x0000, size 0x8
    UPROPERTY(Transient) UBTCompositeNode* Template;  // 0x0008, size 0x8
    uint16 InstanceMemorySize;  // 0x0010, not reflected
};
