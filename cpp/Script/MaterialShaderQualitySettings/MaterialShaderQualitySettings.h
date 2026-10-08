// /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Derives from: UObject
// size 0x78, declared in Engine/Source/Runtime/MaterialShaderQualitySettings/Classes/MaterialShaderQualitySettings.h

UCLASS()
class UMaterialShaderQualitySettings : public UObject
{
public:
    UPROPERTY() TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap;  // 0x0028, size 0x50
};
