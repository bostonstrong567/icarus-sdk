// /Script/Engine.NavAvoidanceData
// size 0x3C, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h

USTRUCT()
struct FNavAvoidanceData
{

    // Not reflected:
    FVector Center;  // 0x0000
    FVector Velocity;  // 0x000C
    float RemainingTimeToLive;  // 0x0018
    float Radius;  // 0x001C
    float HalfHeight;  // 0x0020
    float Weight;  // 0x0024
    float OverrideWeightTime;  // 0x0028
    int32 GroupMask;  // 0x002C
    int32 GroupsToAvoid;  // 0x0030
    int32 GroupsToIgnore;  // 0x0034
    float TestRadius2D;  // 0x0038
};
