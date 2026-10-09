// /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate
// size 0x40, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h

USTRUCT()
struct FDatasmithPostProcessSettingsTemplate
{
public:
    UPROPERTY() uint8 bOverride_WhiteTemp : 1;  // 0x0000, mask 0x01
    UPROPERTY() uint8 bOverride_ColorSaturation : 1;  // 0x0000, mask 0x02
    UPROPERTY() uint8 bOverride_VignetteIntensity : 1;  // 0x0000, mask 0x04
    UPROPERTY() uint8 bOverride_FilmWhitePoint : 1;  // 0x0000, mask 0x08
    UPROPERTY() uint8 bOverride_AutoExposureMethod : 1;  // 0x0000, mask 0x10
    UPROPERTY() uint8 bOverride_CameraISO : 1;  // 0x0000, mask 0x20
    UPROPERTY() uint8 bOverride_CameraShutterSpeed : 1;  // 0x0000, mask 0x40
    UPROPERTY() uint8 bOverride_DepthOfFieldFstop : 1;  // 0x0004, mask 0x01
    UPROPERTY() float WhiteTemp;  // 0x0008, size 0x4
    UPROPERTY() float VignetteIntensity;  // 0x000C, size 0x4
    UPROPERTY() FLinearColor FilmWhitePoint;  // 0x0010, size 0x10
    UPROPERTY() FVector4 ColorSaturation;  // 0x0020, size 0x10
    UPROPERTY() TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;  // 0x0030, size 0x1
    UPROPERTY() float CameraISO;  // 0x0034, size 0x4
    UPROPERTY() float CameraShutterSpeed;  // 0x0038, size 0x4
    UPROPERTY() float DepthOfFieldFstop;  // 0x003C, size 0x4
};
