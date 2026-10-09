// /Script/Icarus.IcarusReplicationGraph
// Derives from: UReplicationGraph > UReplicationDriver > UObject
// size 0x5F0, declared in Icarus/Source/Icarus/Online/IcarusReplicationGraph.h

UCLASS(Transient, Config=Engine)
class UIcarusReplicationGraph : public UReplicationGraph
{
public:
    UPROPERTY() UReplicationGraphNode_GridSpatialization2D* GridNode;  // 0x04A8, size 0x8
    UPROPERTY() UReplicationGraphNode_ActorList* AlwaysRelevantNode;  // 0x04B0, size 0x8
    TMap<FName,FActorRepListRefView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActorRepListRefView,0> > AlwaysRelevantStreamingLevelActors;  // 0x04B8, not reflected
    TMap<UClass *,FClassReplicationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass *,FClassReplicationInfo,0> > ClassRepSettings;  // 0x0508, not reflected
protected:
    TClassMap<UIcarusReplicationGraph::FClassRepPolicy> ClassRepPolicies;  // 0x0560, not reflected
public:
    UFUNCTION() void OnFLODTileBehaviourHarnessChanged(AFLODTile* Tile, bool bRemoved);  // parameters 0x9
    UFUNCTION() void OnPlayerCharacterItemFocusedChanged(AIcarusPlayerCharacter* PlayerCharacter, AIcarusItem* Item, bool bRemoved);  // parameters 0x11
};
