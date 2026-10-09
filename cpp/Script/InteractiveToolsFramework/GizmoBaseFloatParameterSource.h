// /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesFloat.h

UCLASS()
class UGizmoBaseFloatParameterSource : public UObject, public IGizmoFloatParameterSource
{
public:
    TMulticastDelegate<void __cdecl(IGizmoFloatParameterSource *,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy> OnParameterChanged;  // 0x0030, not reflected
};
