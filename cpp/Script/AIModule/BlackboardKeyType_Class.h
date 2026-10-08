// /Script/AIModule.BlackboardKeyType_Class
// Derives from: UBlackboardKeyType > UObject
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Class.h

UCLASS(EditInlineNew)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UObject> BaseClass;  // 0x0030, size 0x8
};
