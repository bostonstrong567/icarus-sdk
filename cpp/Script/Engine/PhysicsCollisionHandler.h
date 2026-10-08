// /Script/Engine.PhysicsCollisionHandler
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h

UCLASS()
class UPhysicsCollisionHandler : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImpactThreshold;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImpactReFireDelay;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundBase* DefaultImpactSound;  // 0x0030, size 0x8
    UPROPERTY() float LastImpactSoundTime;  // 0x0038, size 0x4

    // Virtual functions that start here:
    //   HandlePhysicsCollisions_AssumesLocked, InitCollisionHandler
};
