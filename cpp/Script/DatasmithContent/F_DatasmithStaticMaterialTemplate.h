// /Script/DatasmithContent.DatasmithStaticMaterialTemplate
// size 0x10, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithStaticMeshTemplate.h

USTRUCT()
struct FDatasmithStaticMaterialTemplate
{
public:
    UPROPERTY() FName MaterialSlotName;  // 0x0000, size 0x8
    UPROPERTY() UMaterialInterface* MaterialInterface;  // 0x0008, size 0x8
};
