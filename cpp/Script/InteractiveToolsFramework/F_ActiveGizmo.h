// /Script/InteractiveToolsFramework.ActiveGizmo
// size 0x30, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveGizmoManager.h

USTRUCT()
struct FActiveGizmo
{
public:
    UInteractiveGizmo * Gizmo;  // 0x0000, not reflected
    FString BuilderIdentifier;  // 0x0008, not reflected
    FString InstanceIdentifier;  // 0x0018, not reflected
    void * Owner;  // 0x0028, not reflected
};
