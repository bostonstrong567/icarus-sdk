// /Script/InteractiveToolsFramework.GizmoClickTarget
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoInterfaces.h

UCLASS(Abstract)
class UGizmoClickTarget : public UInterface
{
public:
    UFUNCTION() void UpdateHoverState(bool bHovering) const;  // parameters 0x1
};
