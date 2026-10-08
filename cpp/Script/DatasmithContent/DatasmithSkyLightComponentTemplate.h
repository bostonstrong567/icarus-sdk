// /Script/DatasmithContent.DatasmithSkyLightComponentTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x40, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h

UCLASS()
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() TEnumAsByte<ESkyLightSourceType> SourceType;  // 0x0030, size 0x1
    UPROPERTY() int32 CubemapResolution;  // 0x0034, size 0x4
    UPROPERTY() UTextureCube* Cubemap;  // 0x0038, size 0x8
};
