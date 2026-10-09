// /Script/AIModule.AISightEvent
// size 0x18, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Sight.h

USTRUCT()
struct FAISightEvent
{
public:
    float Age;  // 0x0000, not reflected
    ESightPerceptionEventName::Type EventType;  // 0x0004, not reflected
    UPROPERTY() AActor* SeenActor;  // 0x0008, size 0x8
    UPROPERTY() AActor* Observer;  // 0x0010, size 0x8
};
