// /Niagara/DefaultAssets/Structs/CollisionEvent.CollisionEvent
// size 0x58

USTRUCT()
struct CollisionEvent
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector1Position;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector2Velocity;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector3CollisionNormal;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector4IncomingVelocity;  // 0x0024, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNiagaraID NiagaraIDParticleID;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Float1NormalizedAge;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Float2RandomNormalizedFloat;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 IntegerNumberofCollisions;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LinearColorParticleColor;  // 0x0044, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BooleanLocalSpace;  // 0x0054, size 0x1
};
