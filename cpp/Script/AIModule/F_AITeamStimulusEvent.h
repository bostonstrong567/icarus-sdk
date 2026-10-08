// /Script/AIModule.AITeamStimulusEvent
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Team.h

USTRUCT()
struct FAITeamStimulusEvent
{
    UPROPERTY() AActor* Broadcaster;  // 0x0028, size 0x8
    UPROPERTY() AActor* Enemy;  // 0x0030, size 0x8

    // Not reflected:
    FVector LastKnowLocation;  // 0x0000
    FVector BroadcastLocation;  // 0x000C
    float RangeSq;  // 0x0018
    float InformationAge;  // 0x001C
    FGenericTeamId TeamIdentifier;  // 0x0020
    float Strength;  // 0x0024
};
