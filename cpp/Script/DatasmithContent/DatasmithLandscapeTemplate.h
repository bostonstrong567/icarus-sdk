// /Script/DatasmithContent.DatasmithLandscapeTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x40, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithLandscapeTemplate.h

UCLASS()
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() UMaterialInterface* LandscapeMaterial;  // 0x0030, size 0x8
    UPROPERTY() int32 StaticLightingLOD;  // 0x0038, size 0x4
};
