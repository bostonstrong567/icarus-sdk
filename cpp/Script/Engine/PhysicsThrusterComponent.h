// /Script/Engine.PhysicsThrusterComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x200, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsThrusterComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UPhysicsThrusterComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ThrustStrength;  // 0x01F8, size 0x4
};
