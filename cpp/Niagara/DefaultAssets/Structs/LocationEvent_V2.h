// /Niagara/DefaultAssets/Structs/LocationEvent_V2.LocationEvent_V2
// size 0x4C

USTRUCT()
struct LocationEvent_V2
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector1Position;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector2Velocity;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector3Acceleration;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNiagaraID NiagaraIDParticleID;  // 0x0024, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Float1NormalizedAge;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Float2RandomNormalizedFloat;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Float3DistanceTraveled;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LinearColorParticleColor;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BooleanLocalSpace;  // 0x0048, size 0x1
};
