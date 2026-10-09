// /Script/Engine.LightmassPrimitiveSettings
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FLightmassPrimitiveSettings
{
public:
    UPROPERTY(EditAnywhere) uint8 bUseTwoSidedLighting : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bShadowIndirectOnly : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bUseEmissiveForStaticLighting : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bUseVertexNormalForHemisphereGather : 1;  // 0x0000, mask 0x08
    UPROPERTY() float EmissiveLightFalloffExponent;  // 0x0004, size 0x4
    UPROPERTY() float EmissiveLightExplicitInfluenceRadius;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float EmissiveBoost;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float DiffuseBoost;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float FullyOccludedSamplesFraction;  // 0x0014, size 0x4
};
