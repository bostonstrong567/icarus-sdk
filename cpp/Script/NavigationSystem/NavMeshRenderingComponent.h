// /Script/NavigationSystem.NavMeshRenderingComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x460, declared in Engine/Source/Runtime/NavigationSystem/Public/NavMesh/NavMeshRenderingComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bCollectNavigationData;  // 0x0450, protected
    uint32 : 1 bForceUpdate;  // 0x0450, protected
    FTimerHandle TimerHandle;  // 0x0458, protected

    // Virtual functions that start here:
    //   GatherData
};
