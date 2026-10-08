// /Script/PhysicsCore.ChaosPhysicalMaterial
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/PhysicsCore/Public/Chaos/ChaosPhysicalMaterial.h

UCLASS()
class UChaosPhysicalMaterial : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Friction;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StaticFriction;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Restitution;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LinearEtherDrag;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AngularEtherDrag;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SleepingLinearVelocityThreshold;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SleepingAngularVelocityThreshold;  // 0x0040, size 0x4
};
