// /Script/InteractiveToolsFramework.IntervalGizmo
// Derives from: UInteractiveGizmo > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/IntervalGizmo.h

UCLASS(Transient)
class UIntervalGizmo : public UInteractiveGizmo
{
public:
    UPROPERTY() UGizmoTransformChangeStateTarget* StateTarget;  // 0x0038, size 0x8
    UPROPERTY() UTransformProxy* TransformProxy;  // 0x0050, size 0x8
    UPROPERTY() TArray<UPrimitiveComponent*> ActiveComponents;  // 0x0058, size 0x10
    UPROPERTY() TArray<UInteractiveGizmo*> ActiveGizmos;  // 0x0068, size 0x10
    UPROPERTY() UGizmoComponentAxisSource* AxisYSource;  // 0x0090, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* AxisZSource;  // 0x0098, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    UWorld * World;  // 0x0040, protected
    AIntervalGizmoActor * GizmoActor;  // 0x0048, protected
    UGizmoLocalFloatParameterSource * UpIntervalSource;  // 0x0078, protected
    UGizmoLocalFloatParameterSource * DownIntervalSource;  // 0x0080, protected
    UGizmoLocalFloatParameterSource * ForwardIntervalSource;  // 0x0088, protected
    TSharedPtr<FIntervalGizmoActorFactory,0> GizmoActorBuilder;  // 0x00A0, protected
    TFunction<void __cdecl(UPrimitiveComponent *,bool)> UpdateHoverFunction;  // 0x00B0, protected
    TFunction<void __cdecl(UPrimitiveComponent *,enum EToolContextCoordinateSystem)> UpdateCoordSystemFunction;  // 0x00F0, protected

    // Virtual functions that start here:
    //   AddIntervalHandleGizmo, ClearActiveTarget, ClearSources, SetActiveTarget, SetGizmoActorBuilder
    //   SetUpdateCoordSystemFunction, SetUpdateHoverFunction, SetWorld
};
