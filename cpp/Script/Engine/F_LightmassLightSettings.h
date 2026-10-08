// /Script/Engine.LightmassLightSettings
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FLightmassLightSettings
{
    UPROPERTY(EditAnywhere) float IndirectLightingSaturation;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float ShadowExponent;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) bool bUseAreaShadowsForStationaryLight;  // 0x0008, size 0x1
};
