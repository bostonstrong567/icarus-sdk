// /Script/InteractiveToolsFramework.GizmoConstantAxisSource
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/AxisSources.h

UCLASS()
class UGizmoConstantAxisSource : public UObject, public IGizmoAxisSource
{
public:
    UPROPERTY() FVector Origin;  // 0x0030, size 0xC
    UPROPERTY() FVector Direction;  // 0x003C, size 0xC
};
