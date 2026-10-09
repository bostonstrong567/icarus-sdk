// /Script/AIModule.AITouchEvent
// size 0x20, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Touch.h

USTRUCT()
struct FAITouchEvent
{
public:
    FVector Location;  // 0x0000, not reflected
    UPROPERTY() AActor* TouchReceiver;  // 0x0010, size 0x8
    UPROPERTY() AActor* OtherActor;  // 0x0018, size 0x8
};
