// /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x80, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h

UCLASS()
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() FDatasmithPostProcessSettingsTemplate Settings;  // 0x0030, size 0x40
    UPROPERTY() uint8 bEnabled : 1;  // 0x0070, mask 0x01
    UPROPERTY() uint8 bUnbound : 1;  // 0x0070, mask 0x02
};
