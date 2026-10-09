// /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/MaterialShaderQualitySettings/Classes/ShaderPlatformQualitySettings.h

UCLASS(Config=Engine)
class UShaderPlatformQualitySettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) FMaterialQualityOverrides QualityOverrides;  // 0x0028, size 0x9
    FString ConfigPlatformName;  // 0x0050, not reflected
};
