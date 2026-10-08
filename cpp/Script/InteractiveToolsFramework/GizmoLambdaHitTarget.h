// /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/HitTargets.h

UCLASS()
class UGizmoLambdaHitTarget : public UObject, public IGizmoClickTarget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TUniqueFunction<FInputRayHit __cdecl(FInputDeviceRay const &)> IsHitFunction;  // 0x0030
    TFunction<void __cdecl(bool)> UpdateHoverFunction;  // 0x0070
};
