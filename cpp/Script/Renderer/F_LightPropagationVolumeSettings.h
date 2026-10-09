// /Script/Renderer.LightPropagationVolumeSettings
// size 0x40, declared in Engine/Source/Runtime/Renderer/Public/LightPropagationVolumeSettings.h

USTRUCT()
struct FLightPropagationVolumeSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVIntensity : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVDirectionalOcclusionIntensity : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVDirectionalOcclusionRadius : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVDiffuseOcclusionExponent : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSpecularOcclusionExponent : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVDiffuseOcclusionIntensity : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSpecularOcclusionIntensity : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSize : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSecondaryOcclusionIntensity : 1;  // 0x0001, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSecondaryBounceIntensity : 1;  // 0x0001, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVGeometryVolumeBias : 1;  // 0x0001, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVVplInjectionBias : 1;  // 0x0001, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVEmissiveInjectionIntensity : 1;  // 0x0001, mask 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVIntensity;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVVplInjectionBias;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LPVSize;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSecondaryOcclusionIntensity;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSecondaryBounceIntensity;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVGeometryVolumeBias;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVEmissiveInjectionIntensity;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDirectionalOcclusionIntensity;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDirectionalOcclusionRadius;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDiffuseOcclusionExponent;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSpecularOcclusionExponent;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDiffuseOcclusionIntensity;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSpecularOcclusionIntensity;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVFadeRange;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDirectionalOcclusionFadeRange;  // 0x003C, size 0x4
};
