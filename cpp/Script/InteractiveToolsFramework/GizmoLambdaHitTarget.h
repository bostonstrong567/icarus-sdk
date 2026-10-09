// /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/HitTargets.h

UCLASS()
class UGizmoLambdaHitTarget : public UObject, public IGizmoClickTarget
{
public:
    TUniqueFunction<FInputRayHit __cdecl(FInputDeviceRay const &)> IsHitFunction;  // 0x0030, not reflected
    TFunction<void __cdecl(bool)> UpdateHoverFunction;  // 0x0070, not reflected
};
