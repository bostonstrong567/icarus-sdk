// /Script/AIModule.BlackboardKeyType_String
// Derives from: UBlackboardKeyType > UObject
// size 0x40, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_String.h

UCLASS(EditInlineNew)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
    UPROPERTY() FString StringValue;  // 0x0030, size 0x10
};
