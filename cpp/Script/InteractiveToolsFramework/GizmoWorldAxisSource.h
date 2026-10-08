// /Script/InteractiveToolsFramework.GizmoWorldAxisSource
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/AxisSources.h

UCLASS()
class UGizmoWorldAxisSource : public UObject, public IGizmoAxisSource
{
public:
    UPROPERTY() FVector Origin;  // 0x0030, size 0xC
    UPROPERTY() int32 AxisIndex;  // 0x003C, size 0x4
};
