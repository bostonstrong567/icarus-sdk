// /Script/InteractiveToolsFramework.IntervalGizmo
// Derives from: UInteractiveGizmo > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/IntervalGizmo.h

UCLASS(Transient)
class UIntervalGizmo : public UInteractiveGizmo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() UGizmoTransformChangeStateTarget* StateTarget;  // 0x0038, size 0x8
protected:
    UWorld * World;  // 0x0040, not reflected
    AIntervalGizmoActor * GizmoActor;  // 0x0048, not reflected
    UPROPERTY() UTransformProxy* TransformProxy;  // 0x0050, size 0x8
    UPROPERTY() TArray<UPrimitiveComponent*> ActiveComponents;  // 0x0058, size 0x10
    UPROPERTY() TArray<UInteractiveGizmo*> ActiveGizmos;  // 0x0068, size 0x10
    UGizmoLocalFloatParameterSource * UpIntervalSource;  // 0x0078, not reflected
    UGizmoLocalFloatParameterSource * DownIntervalSource;  // 0x0080, not reflected
    UGizmoLocalFloatParameterSource * ForwardIntervalSource;  // 0x0088, not reflected
    UPROPERTY() UGizmoComponentAxisSource* AxisYSource;  // 0x0090, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* AxisZSource;  // 0x0098, size 0x8
    TSharedPtr<FIntervalGizmoActorFactory,0> GizmoActorBuilder;  // 0x00A0, not reflected
    TFunction<void __cdecl(UPrimitiveComponent *,bool)> UpdateHoverFunction;  // 0x00B0, not reflected
    TFunction<void __cdecl(UPrimitiveComponent *,enum EToolContextCoordinateSystem)> UpdateCoordSystemFunction;  // 0x00F0, not reflected

    // Virtual functions that start here:
    //   AddIntervalHandleGizmo, ClearActiveTarget, ClearSources, SetActiveTarget, SetGizmoActorBuilder
    //   SetUpdateCoordSystemFunction, SetUpdateHoverFunction, SetWorld
};
