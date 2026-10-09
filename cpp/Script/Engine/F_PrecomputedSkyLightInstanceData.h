// /Script/Engine.PrecomputedSkyLightInstanceData
// size 0x170, declared in Engine/Source/Runtime/Engine/Classes/Components/SkyLightComponent.h

USTRUCT()
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{
public:
    UPROPERTY() FGuid LightGuid;  // 0x00B8, size 0x10
    UPROPERTY() float AverageBrightness;  // 0x00C8, size 0x4
    TRefCountPtr<FSkyTextureCubeResource> ProcessedSkyTexture;  // 0x00D0, not reflected
    TSHVectorRGB<3> IrradianceEnvironmentMap;  // 0x00E0, not reflected
};
