// /Script/Engine.RadialForceComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/RadialForceComponent.h

UCLASS(Config=Engine)
class URadialForceComponent : public USceneComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Radius;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ERadialImpulseFalloff> Falloff;  // 0x01FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImpulseStrength;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bImpulseVelChange : 1;  // 0x0204, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIgnoreOwningActor : 1;  // 0x0204, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForceStrength;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DestructibleDamage;  // 0x020C, size 0x4
protected:
    UPROPERTY(EditAnywhere) TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;  // 0x0210, size 0x10
    FCollisionObjectQueryParams CollisionObjectQueryParams;  // 0x0220, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FireImpulse();
    UFUNCTION(BlueprintCallable) void RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);  // parameters 0x1

    // Virtual functions that start here:
    //   AddObjectTypeToAffect, FireImpulse, RemoveObjectTypeToAffect
};
