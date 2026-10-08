// /Script/AIModule.BlackboardKeyType_Enum
// Derives from: UBlackboardKeyType > UObject
// size 0x50, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h

UCLASS(EditInlineNew)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
    UPROPERTY(EditAnywhere) UEnum* EnumType;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FString EnumName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) uint8 bIsEnumNameValid : 1;  // 0x0048, mask 0x01
};
