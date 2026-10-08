// /Script/Engine.LightmassDirectionalLightSettings
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
    UPROPERTY(EditAnywhere) float LightSourceAngle;  // 0x000C, size 0x4
};
