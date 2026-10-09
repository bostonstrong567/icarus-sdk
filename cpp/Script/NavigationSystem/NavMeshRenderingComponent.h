// /Script/NavigationSystem.NavMeshRenderingComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x460, declared in Engine/Source/Runtime/NavigationSystem/Public/NavMesh/NavMeshRenderingComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
protected:
    uint32 : 1 bCollectNavigationData;  // 0x0450, not reflected
    uint32 : 1 bForceUpdate;  // 0x0450, not reflected
    FTimerHandle TimerHandle;  // 0x0458, not reflected

    // Virtual functions that start here:
    //   GatherData
};
