// /Script/Engine.PhysicsConstraintActor
// Derives from: ARigidBodyBase > AActor > UObject
// size 0x240, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintActor.h

UCLASS(MinimalAPI, Config=Engine)
class APhysicsConstraintActor : public ARigidBodyBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Deprecated) AActor* ConstraintActor1;  // 0x0228, size 0x8
    UPROPERTY(Deprecated) AActor* ConstraintActor2;  // 0x0230, size 0x8
    UPROPERTY(Deprecated) uint8 bDisableCollision : 1;  // 0x0238, mask 0x01
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPhysicsConstraintComponent* ConstraintComp;  // 0x0220, size 0x8
};
