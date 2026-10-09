// /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate
// size 0x8, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h

USTRUCT()
struct FDatasmithCameraFocusSettingsTemplate
{
public:
    UPROPERTY() ECameraFocusMethod FocusMethod;  // 0x0000, size 0x1
    UPROPERTY() float ManualFocusDistance;  // 0x0004, size 0x4
};
