// /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Derives from: UGizmoBaseFloatParameterSource > UObject
// size 0x60, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/IntervalGizmo.h

UCLASS()
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
    UPROPERTY() TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource;  // 0x0048, size 0x10
    UPROPERTY() float MinParameter;  // 0x0058, size 0x4
    UPROPERTY() float MaxParameter;  // 0x005C, size 0x4
};
