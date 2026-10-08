// /Script/InteractiveToolsFramework.GizmoStateTarget
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoInterfaces.h

UCLASS(Abstract)
class UGizmoStateTarget : public UInterface
{
public:

    UFUNCTION() void BeginUpdate();
    UFUNCTION() void EndUpdate();
};
