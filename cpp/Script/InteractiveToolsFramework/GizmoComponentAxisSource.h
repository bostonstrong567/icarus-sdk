// /Script/InteractiveToolsFramework.GizmoComponentAxisSource
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/AxisSources.h

UCLASS()
class UGizmoComponentAxisSource : public UObject, public IGizmoAxisSource
{
public:
    UPROPERTY(Instanced) USceneComponent* Component;  // 0x0030, size 0x8
    UPROPERTY() int32 AxisIndex;  // 0x0038, size 0x4
    UPROPERTY() bool bLocalAxes;  // 0x003C, size 0x1
};
