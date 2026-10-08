// /Script/DatasmithContent.DatasmithStaticMeshTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0xA8, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithStaticMeshTemplate.h

UCLASS()
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY(EditAnywhere) FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;  // 0x0030, size 0x50
    UPROPERTY(EditAnywhere) int32 LightMapCoordinateIndex;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) int32 LightMapResolution;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere) TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;  // 0x0098, size 0x10
};
