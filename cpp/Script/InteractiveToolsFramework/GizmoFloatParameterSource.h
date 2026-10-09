// /Script/InteractiveToolsFramework.GizmoFloatParameterSource
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoInterfaces.h

UCLASS(Abstract)
class UGizmoFloatParameterSource : public UInterface
{
public:
    UFUNCTION() void BeginModify();
    UFUNCTION() void EndModify();
    UFUNCTION() float GetParameter() const;  // parameters 0x4
    UFUNCTION() void SetParameter(float NewValue);  // parameters 0x4
};
