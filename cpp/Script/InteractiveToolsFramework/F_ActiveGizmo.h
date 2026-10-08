// /Script/InteractiveToolsFramework.ActiveGizmo
// size 0x30, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveGizmoManager.h

USTRUCT()
struct FActiveGizmo
{

    // Not reflected:
    UInteractiveGizmo * Gizmo;  // 0x0000
    FString BuilderIdentifier;  // 0x0008
    FString InstanceIdentifier;  // 0x0018
    void * Owner;  // 0x0028
};
