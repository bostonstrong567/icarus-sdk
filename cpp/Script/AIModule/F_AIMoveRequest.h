// /Script/AIModule.AIMoveRequest
// size 0x40, declared in Engine/Source/Runtime/AIModule/Classes/AITypes.h

USTRUCT()
struct FAIMoveRequest
{
    UPROPERTY() AActor* GoalActor;  // 0x0000, size 0x8

    // Not reflected:
    FVector GoalLocation;  // 0x0008
    TSubclassOf<UNavigationQueryFilter> FilterClass;  // 0x0018
    uint32 : 1 bInitialized;  // 0x0020
    uint32 : 1 bMoveToActor;  // 0x0020
    uint32 : 1 bUsePathfinding;  // 0x0020
    uint32 : 1 bAllowPartialPath;  // 0x0020
    uint32 : 1 bProjectGoalOnNavigation;  // 0x0020
    uint32 : 1 bReachTestIncludesAgentRadius;  // 0x0020
    uint32 : 1 bReachTestIncludesGoalRadius;  // 0x0020
    uint32 : 1 bCanStrafe;  // 0x0020
    float AcceptanceRadius;  // 0x0024
    TSharedPtr<FMoveRequestCustomData,1> UserData;  // 0x0028
    int32 UserFlags;  // 0x0038
};
