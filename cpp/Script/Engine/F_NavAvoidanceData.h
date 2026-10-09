// /Script/Engine.NavAvoidanceData
// size 0x3C, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h

USTRUCT()
struct FNavAvoidanceData
{
public:
    FVector Center;  // 0x0000, not reflected
    FVector Velocity;  // 0x000C, not reflected
    float RemainingTimeToLive;  // 0x0018, not reflected
    float Radius;  // 0x001C, not reflected
    float HalfHeight;  // 0x0020, not reflected
    float Weight;  // 0x0024, not reflected
    float OverrideWeightTime;  // 0x0028, not reflected
    int32 GroupMask;  // 0x002C, not reflected
    int32 GroupsToAvoid;  // 0x0030, not reflected
    int32 GroupsToIgnore;  // 0x0034, not reflected
    float TestRadius2D;  // 0x0038, not reflected
};
