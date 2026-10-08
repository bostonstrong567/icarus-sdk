// /Script/AIModule.BlackboardKeyType_Object
// Derives from: UBlackboardKeyType > UObject
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Object.h

UCLASS(EditInlineNew)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UObject> BaseClass;  // 0x0030, size 0x8
};
