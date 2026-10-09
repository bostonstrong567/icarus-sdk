// /Script/Engine.ExponentialHeightFogData
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Components/ExponentialHeightFogComponent.h

USTRUCT()
struct FExponentialHeightFogData
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float FogDensity;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float FogHeightFalloff;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float FogHeightOffset;  // 0x0008, size 0x4
};
