// /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/AxisSources.h

UCLASS()
class UGizmoConstantFrameAxisSource : public UObject, public IGizmoAxisSource
{
public:
    UPROPERTY() FVector Origin;  // 0x0030, size 0xC
    UPROPERTY() FVector Direction;  // 0x003C, size 0xC
    UPROPERTY() FVector TangentX;  // 0x0048, size 0xC
    UPROPERTY() FVector TangentY;  // 0x0054, size 0xC
};
