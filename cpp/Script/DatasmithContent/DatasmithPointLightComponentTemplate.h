// /Script/DatasmithContent.DatasmithPointLightComponentTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x40, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h

UCLASS()
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() ELightUnits IntensityUnits;  // 0x0030, size 0x1
    UPROPERTY() float SourceRadius;  // 0x0034, size 0x4
    UPROPERTY() float SourceLength;  // 0x0038, size 0x4
    UPROPERTY() float AttenuationRadius;  // 0x003C, size 0x4
};
