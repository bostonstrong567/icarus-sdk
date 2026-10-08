// /Script/AIModule.AITouchEvent
// size 0x20, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Touch.h

USTRUCT()
struct FAITouchEvent
{
    UPROPERTY() AActor* TouchReceiver;  // 0x0010, size 0x8
    UPROPERTY() AActor* OtherActor;  // 0x0018, size 0x8

    // Not reflected:
    FVector Location;  // 0x0000
};
