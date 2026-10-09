// /Script/AIModule.GridPathFollowingComponent
// Derives from: UPathFollowingComponent > UActorComponent > UObject
// size 0x280, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/GridPathFollowingComponent.h

UCLASS(Config=Engine)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) UNavLocalGridManager* GridManager;  // 0x0250, size 0x8
    int32 ActiveGridIdx;  // 0x0258, not reflected
    int32 ActiveGridId;  // 0x025C, not reflected
    uint32 : 1 bHasGridPath;  // 0x0260, not reflected
    uint32 : 1 bIsPathEndInsideGrid;  // 0x0260, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > GridPathPoints;  // 0x0268, not reflected
    int32 GridMoveSegmentEndIndex;  // 0x0278, not reflected
    int32 MoveSegmentStartIndexOffGrid;  // 0x027C, not reflected
};
