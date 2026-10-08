// /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Derives from: UGizmoBaseVec2ParameterSource > UObject
// size 0x60, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesVec2.h

UCLASS()
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
    UPROPERTY() FVector2D Value;  // 0x0048, size 0x8
    UPROPERTY() FGizmoVec2ParameterChange LastChange;  // 0x0050, size 0x10
};
