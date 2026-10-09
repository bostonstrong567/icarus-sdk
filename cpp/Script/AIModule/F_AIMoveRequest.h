// /Script/AIModule.AIMoveRequest
// size 0x40, declared in Engine/Source/Runtime/AIModule/Classes/AITypes.h

USTRUCT()
struct FAIMoveRequest
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() AActor* GoalActor;  // 0x0000, size 0x8
    FVector GoalLocation;  // 0x0008, not reflected
    TSubclassOf<UNavigationQueryFilter> FilterClass;  // 0x0018, not reflected
    uint32 : 1 bAllowPartialPath;  // 0x0020, not reflected
    uint32 : 1 bCanStrafe;  // 0x0020, not reflected
    uint32 : 1 bInitialized;  // 0x0020, not reflected
    uint32 : 1 bMoveToActor;  // 0x0020, not reflected
    uint32 : 1 bProjectGoalOnNavigation;  // 0x0020, not reflected
    uint32 : 1 bReachTestIncludesAgentRadius;  // 0x0020, not reflected
    uint32 : 1 bReachTestIncludesGoalRadius;  // 0x0020, not reflected
    uint32 : 1 bUsePathfinding;  // 0x0020, not reflected
    float AcceptanceRadius;  // 0x0024, not reflected
    TSharedPtr<FMoveRequestCustomData,1> UserData;  // 0x0028, not reflected
    int32 UserFlags;  // 0x0038, not reflected
};
