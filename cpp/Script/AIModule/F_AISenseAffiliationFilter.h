// /Script/AIModule.AISenseAffiliationFilter
// size 0x4, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h

USTRUCT()
struct FAISenseAffiliationFilter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bDetectEnemies : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bDetectNeutrals : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bDetectFriendlies : 1;  // 0x0000, mask 0x04
};
