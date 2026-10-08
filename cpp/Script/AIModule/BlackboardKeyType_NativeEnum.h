// /Script/AIModule.BlackboardKeyType_NativeEnum
// Derives from: UBlackboardKeyType > UObject
// size 0x48, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_NativeEnum.h

UCLASS(EditInlineNew)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
    UPROPERTY(EditAnywhere) FString EnumName;  // 0x0030, size 0x10
    UPROPERTY() UEnum* EnumType;  // 0x0040, size 0x8
};
