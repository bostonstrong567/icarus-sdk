// /Script/InteractiveToolsFramework.TransformGizmo
// Derives from: UInteractiveGizmo > UObject
// size 0x1A0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformGizmo.h

UCLASS(Transient)
class UTransformGizmo : public UInteractiveGizmo
{
public:
    UPROPERTY() UTransformProxy* ActiveTarget;  // 0x0040, size 0x8
    UPROPERTY() bool bSnapToWorldGrid;  // 0x0048, size 0x1
    UPROPERTY() bool bGridSizeIsExplicit;  // 0x0049, size 0x1
    UPROPERTY() FVector ExplicitGridSize;  // 0x004C, size 0xC
    UPROPERTY() bool bRotationGridSizeIsExplicit;  // 0x0058, size 0x1
    UPROPERTY() FRotator ExplicitRotationGridSize;  // 0x005C, size 0xC
    UPROPERTY() bool bSnapToWorldRotGrid;  // 0x0068, size 0x1
    UPROPERTY() bool bUseContextCoordinateSystem;  // 0x0069, size 0x1
    UPROPERTY() EToolContextCoordinateSystem CurrentCoordinateSystem;  // 0x006C, size 0x4
    UPROPERTY() TArray<UPrimitiveComponent*> ActiveComponents;  // 0x0100, size 0x10
    UPROPERTY() TArray<UPrimitiveComponent*> NonuniformScaleComponents;  // 0x0110, size 0x10
    UPROPERTY() TArray<UInteractiveGizmo*> ActiveGizmos;  // 0x0120, size 0x10
    UPROPERTY() UGizmoConstantFrameAxisSource* CameraAxisSource;  // 0x0140, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* AxisXSource;  // 0x0148, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* AxisYSource;  // 0x0150, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* AxisZSource;  // 0x0158, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* UnitAxisXSource;  // 0x0160, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* UnitAxisYSource;  // 0x0168, size 0x8
    UPROPERTY() UGizmoComponentAxisSource* UnitAxisZSource;  // 0x0170, size 0x8
    UPROPERTY() UGizmoTransformChangeStateTarget* StateTarget;  // 0x0178, size 0x8
    UPROPERTY() UGizmoScaledTransformSource* ScaledTransformSource;  // 0x0180, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FTransformGizmoActorFactory,0> GizmoActorBuilder;  // 0x0070, protected
    TFunction<void __cdecl(UPrimitiveComponent *,bool)> UpdateHoverFunction;  // 0x0080, protected
    TFunction<void __cdecl(UPrimitiveComponent *,enum EToolContextCoordinateSystem)> UpdateCoordSystemFunction;  // 0x00C0, protected
    UWorld * World;  // 0x0130, protected
    ATransformGizmoActor * GizmoActor;  // 0x0138, protected
    FVector SeparateChildScale;  // 0x0188, protected
    TUniquePtr<FTransformGizmoTransformChange,TDefaultDelete<FTransformGizmoTransformChange> > ActiveChange;  // 0x0198, protected

    // Virtual functions that start here:
    //   AddAxisRotationGizmo, AddAxisScaleGizmo, AddAxisTranslationGizmo, AddPlaneScaleGizmo
    //   AddPlaneTranslationGizmo, AddUniformScaleGizmo, ClearActiveTarget, SetActiveTarget
    //   SetGizmoActorBuilder, SetNewChildScale, SetNewGizmoTransform, SetUpdateCoordSystemFunction
    //   SetUpdateHoverFunction, SetVisibility, SetWorld
};
