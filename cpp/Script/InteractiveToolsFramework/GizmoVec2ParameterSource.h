// /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoInterfaces.h

UCLASS(Abstract)
class UGizmoVec2ParameterSource : public UInterface
{
public:

    UFUNCTION() void BeginModify();
    UFUNCTION() void EndModify();
    UFUNCTION() FVector2D GetParameter() const;  // parameters 0x8
    UFUNCTION() void SetParameter(const FVector2D& NewValue);  // parameters 0x8
};
