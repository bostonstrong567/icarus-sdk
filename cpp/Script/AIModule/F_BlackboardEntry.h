// /Script/AIModule.BlackboardEntry
// size 0x18, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h

USTRUCT()
struct FBlackboardEntry
{
public:
    UPROPERTY(EditAnywhere) FName EntryName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UBlackboardKeyType* KeyType;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) uint8 bInstanceSynced : 1;  // 0x0010, mask 0x01
};
