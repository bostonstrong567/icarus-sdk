// /Script/Engine.RadialForceActor
// Derives from: ARigidBodyBase > AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/RadialForceActor.h

UCLASS(MinimalAPI, Config=Engine)
class ARadialForceActor : public ARigidBodyBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) URadialForceComponent* ForceComponent;  // 0x0220, size 0x8
public:
    UFUNCTION(BlueprintCallable) void DisableForce();
    UFUNCTION(BlueprintCallable) void EnableForce();
    UFUNCTION(BlueprintCallable) void FireImpulse();
    UFUNCTION(BlueprintCallable) void ToggleForce();

    // Virtual functions that start here:
    //   DisableForce, EnableForce, FireImpulse, ToggleForce
};
