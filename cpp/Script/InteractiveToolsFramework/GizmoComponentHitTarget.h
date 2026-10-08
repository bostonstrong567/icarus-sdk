// /Script/InteractiveToolsFramework.GizmoComponentHitTarget
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/HitTargets.h

UCLASS()
class UGizmoComponentHitTarget : public UObject, public IGizmoClickTarget
{
public:
    UPROPERTY(Instanced) UPrimitiveComponent* Component;  // 0x0030, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TFunction<void __cdecl(bool)> UpdateHoverFunction;  // 0x0040
};
