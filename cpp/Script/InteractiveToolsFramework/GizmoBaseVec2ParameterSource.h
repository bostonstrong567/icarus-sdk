// /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesVec2.h

UCLASS()
class UGizmoBaseVec2ParameterSource : public UObject, public IGizmoVec2ParameterSource
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(IGizmoVec2ParameterSource *,FGizmoVec2ParameterChange),FDefaultDelegateUserPolicy> OnParameterChanged;  // 0x0030
};
