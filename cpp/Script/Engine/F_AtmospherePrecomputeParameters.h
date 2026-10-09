// /Script/Engine.AtmospherePrecomputeParameters
// size 0x2C, declared in Engine/Source/Runtime/Engine/Classes/Atmosphere/AtmosphericFogComponent.h

USTRUCT()
struct FAtmospherePrecomputeParameters
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DensityHeight;  // 0x0000, size 0x4
    UPROPERTY(Deprecated) float DecayHeight;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxScatteringOrder;  // 0x0008, size 0x4
    UPROPERTY() int32 TransmittanceTexWidth;  // 0x000C, size 0x4
    UPROPERTY() int32 TransmittanceTexHeight;  // 0x0010, size 0x4
    UPROPERTY() int32 IrradianceTexWidth;  // 0x0014, size 0x4
    UPROPERTY() int32 IrradianceTexHeight;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 InscatterAltitudeSampleNum;  // 0x001C, size 0x4
    UPROPERTY() int32 InscatterMuNum;  // 0x0020, size 0x4
    UPROPERTY() int32 InscatterMuSNum;  // 0x0024, size 0x4
    UPROPERTY() int32 InscatterNuNum;  // 0x0028, size 0x4
};
