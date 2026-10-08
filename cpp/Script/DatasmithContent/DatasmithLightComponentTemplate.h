// /Script/DatasmithContent.DatasmithLightComponentTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x68, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithLightComponentTemplate.h

UCLASS()
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() uint8 bVisible : 1;  // 0x0030, mask 0x01
    UPROPERTY() uint8 CastShadows : 1;  // 0x0034, mask 0x01
    UPROPERTY() uint8 bUseTemperature : 1;  // 0x0034, mask 0x02
    UPROPERTY() uint8 bUseIESBrightness : 1;  // 0x0034, mask 0x04
    UPROPERTY() float Intensity;  // 0x0038, size 0x4
    UPROPERTY() float Temperature;  // 0x003C, size 0x4
    UPROPERTY() float IESBrightnessScale;  // 0x0040, size 0x4
    UPROPERTY() FLinearColor LightColor;  // 0x0044, size 0x10
    UPROPERTY() UMaterialInterface* LightFunctionMaterial;  // 0x0058, size 0x8
    UPROPERTY() UTextureLightProfile* IESTexture;  // 0x0060, size 0x8
};
