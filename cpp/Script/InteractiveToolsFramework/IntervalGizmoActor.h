// /Script/InteractiveToolsFramework.IntervalGizmoActor
// Derives from: AGizmoActor > AInternalToolFrameworkActor > AActor > UObject
// size 0x238, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/IntervalGizmo.h

UCLASS(Transient, Config=Engine)
class AIntervalGizmoActor : public AGizmoActor
{
public:
    UPROPERTY(Instanced) UGizmoLineHandleComponent* UpIntervalComponent;  // 0x0220, size 0x8
    UPROPERTY(Instanced) UGizmoLineHandleComponent* DownIntervalComponent;  // 0x0228, size 0x8
    UPROPERTY(Instanced) UGizmoLineHandleComponent* ForwardIntervalComponent;  // 0x0230, size 0x8
};
