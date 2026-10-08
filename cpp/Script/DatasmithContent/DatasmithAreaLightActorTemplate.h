// /Script/DatasmithContent.DatasmithAreaLightActorTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0xA0, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h

UCLASS()
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() EDatasmithAreaLightActorType LightType;  // 0x0030, size 0x1
    UPROPERTY() EDatasmithAreaLightActorShape LightShape;  // 0x0031, size 0x1
    UPROPERTY() FVector2D Dimensions;  // 0x0034, size 0x8
    UPROPERTY() FLinearColor Color;  // 0x003C, size 0x10
    UPROPERTY() float Intensity;  // 0x004C, size 0x4
    UPROPERTY() ELightUnits IntensityUnits;  // 0x0050, size 0x1
    UPROPERTY() float Temperature;  // 0x0054, size 0x4
    UPROPERTY() TSoftObjectPtr<UTextureLightProfile> IESTexture;  // 0x0058, size 0x28
    UPROPERTY() bool bUseIESBrightness;  // 0x0080, size 0x1
    UPROPERTY() float IESBrightnessScale;  // 0x0084, size 0x4
    UPROPERTY() FRotator Rotation;  // 0x0088, size 0xC
    UPROPERTY() float SourceRadius;  // 0x0094, size 0x4
    UPROPERTY() float SourceLength;  // 0x0098, size 0x4
    UPROPERTY() float AttenuationRadius;  // 0x009C, size 0x4
};
