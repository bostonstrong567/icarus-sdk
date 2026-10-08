// /Script/ApexDestruction.DestructibleComponent
// Derives from: USkinnedMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x800, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UDestructibleComponent : public USkinnedMeshComponent, public IDestructibleInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bFractureEffectOverride : 1;  // 0x06A0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFractureEffect> FractureEffects;  // 0x06A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableHardSleeping;  // 0x06B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LargeChunkThreshold;  // 0x06BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FracturedChunkCollisionProfile;  // 0x06C0, size 0x8
    UPROPERTY(BlueprintAssignable) FComponentFractureSignature OnComponentFracture;  // 0x06D8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FApexDestructionCustomPayload,TSizedDefaultAllocator<32> > ChunkInfos;  // 0x06C8
    nvidia::apex::DestructibleActor * ApexDestructibleActor;  // 0x06E8
    FCollisionResponse LargeChunkCollisionResponse;  // 0x06F0, private
    FCollisionResponse SmallChunkCollisionResponse;  // 0x0720, private
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> FracturedChunkIndices;  // 0x0750, private
    FCollisionResponse FracturedChunkCollisionResponse;  // 0x07A0, private
    FPhysxUserData PhysxUserData;  // 0x07D0, private
    TArray<FPhysxUserData,TSizedDefaultAllocator<32> > PhysxChunkUserData;  // 0x07E0
    float ContactOffsetFactor;  // 0x07F0, private
    float MinContactOffset;  // 0x07F4, private
    float MaxContactOffset;  // 0x07F8, private

    UFUNCTION(BlueprintCallable) void ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);  // parameters 0x19
    UFUNCTION(BlueprintCallable) UDestructibleMesh* GetDestructibleMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDestructibleMesh(UDestructibleMesh* NewMesh);  // parameters 0x8

    // Virtual functions that start here:
    //   SpawnFractureEffectsFromDamageEvent
};
