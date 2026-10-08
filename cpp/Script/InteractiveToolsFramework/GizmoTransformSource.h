// /Script/InteractiveToolsFramework.GizmoTransformSource
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoInterfaces.h

UCLASS(Abstract)
class UGizmoTransformSource : public UInterface
{
public:

    UFUNCTION() FTransform GetTransform() const;  // parameters 0x30
    UFUNCTION() void SetTransform(const FTransform& NewTransform);  // parameters 0x30
};
