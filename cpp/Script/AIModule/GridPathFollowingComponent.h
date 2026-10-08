// /Script/AIModule.GridPathFollowingComponent
// Derives from: UPathFollowingComponent > UActorComponent > UObject
// size 0x280, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/GridPathFollowingComponent.h

UCLASS(Config=Engine)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
    UPROPERTY(Transient) UNavLocalGridManager* GridManager;  // 0x0250, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    int32 ActiveGridIdx;  // 0x0258, protected
    int32 ActiveGridId;  // 0x025C, protected
    uint32 : 1 bIsPathEndInsideGrid;  // 0x0260, protected
    uint32 : 1 bHasGridPath;  // 0x0260, protected
    TArray<FVector,TSizedDefaultAllocator<32> > GridPathPoints;  // 0x0268, protected
    int32 GridMoveSegmentEndIndex;  // 0x0278, protected
    int32 MoveSegmentStartIndexOffGrid;  // 0x027C, protected
};
