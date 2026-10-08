// /Script/InteractiveToolsFramework.TransformGizmoBuilder
// Derives from: UInteractiveGizmoBuilder > UObject
// size 0xC0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformGizmo.h

UCLASS(Transient)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FTransformGizmoActorFactory,0> GizmoActorBuilder;  // 0x0028
    TFunction<void __cdecl(UPrimitiveComponent *,bool)> UpdateHoverFunction;  // 0x0040
    TFunction<void __cdecl(UPrimitiveComponent *,enum EToolContextCoordinateSystem)> UpdateCoordSystemFunction;  // 0x0080
};
