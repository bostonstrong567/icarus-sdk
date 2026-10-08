// /Script/DatasmithContent.DatasmithCineCameraComponentTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x90, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h

UCLASS()
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;  // 0x0030, size 0x8
    UPROPERTY() FDatasmithCameraLensSettingsTemplate LensSettings;  // 0x0038, size 0x4
    UPROPERTY() FDatasmithCameraFocusSettingsTemplate FocusSettings;  // 0x003C, size 0x8
    UPROPERTY() float CurrentFocalLength;  // 0x0044, size 0x4
    UPROPERTY() float CurrentAperture;  // 0x0048, size 0x4
    UPROPERTY() FDatasmithPostProcessSettingsTemplate PostProcessSettings;  // 0x0050, size 0x40
};
