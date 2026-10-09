// /Script/AIModule.AITeamStimulusEvent
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Team.h

USTRUCT()
struct FAITeamStimulusEvent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    FVector LastKnowLocation;  // 0x0000, not reflected
    float RangeSq;  // 0x0018, not reflected
    float InformationAge;  // 0x001C, not reflected
    FGenericTeamId TeamIdentifier;  // 0x0020, not reflected
    float Strength;  // 0x0024, not reflected
    UPROPERTY() AActor* Enemy;  // 0x0030, size 0x8
private:
    FVector BroadcastLocation;  // 0x000C, not reflected
    UPROPERTY() AActor* Broadcaster;  // 0x0028, size 0x8
};
