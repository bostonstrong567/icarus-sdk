// /Script/Engine.PhysicsThruster
// Derives from: ARigidBodyBase > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsThruster.h

UCLASS(Config=Engine)
class APhysicsThruster : public ARigidBodyBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPhysicsThrusterComponent* ThrusterComponent;  // 0x0220, size 0x8
};
