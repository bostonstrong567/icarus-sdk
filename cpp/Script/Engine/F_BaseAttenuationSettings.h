// /Script/Engine.BaseAttenuationSettings
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Attenuation.h

USTRUCT()
struct FBaseAttenuationSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttenuationDistanceModel DistanceAlgorithm;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAttenuationShape> AttenuationShape;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float dBAttenuationAtMax;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ENaturalSoundFalloffMode FalloffMode;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AttenuationShapeExtents;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ConeOffset;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FalloffDistance;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomAttenuationCurve;  // 0x0028, size 0x88
};
