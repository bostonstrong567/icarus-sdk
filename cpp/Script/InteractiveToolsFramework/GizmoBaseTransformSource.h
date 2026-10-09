// /Script/InteractiveToolsFramework.GizmoBaseTransformSource
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformSources.h

UCLASS()
class UGizmoBaseTransformSource : public UObject, public IGizmoTransformSource
{
public:
    TMulticastDelegate<void __cdecl(IGizmoTransformSource *),FDefaultDelegateUserPolicy> OnTransformChanged;  // 0x0030, not reflected
};
