// /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Derives from: UGizmoBaseFloatParameterSource > UObject
// size 0x58, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesFloat.h

UCLASS()
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
    UPROPERTY() float Value;  // 0x0048, size 0x4
    UPROPERTY() FGizmoFloatParameterChange LastChange;  // 0x004C, size 0x8
};
