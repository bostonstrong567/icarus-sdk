// /Script/InteractiveToolsFramework.GizmoAxisSource
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoInterfaces.h

UCLASS(Abstract)
class UGizmoAxisSource : public UInterface
{
public:
    UFUNCTION() FVector GetDirection() const;  // parameters 0xC
    UFUNCTION() FVector GetOrigin() const;  // parameters 0xC
    UFUNCTION() void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) const;  // parameters 0x18
    UFUNCTION() bool HasTangentVectors() const;  // parameters 0x1
};
