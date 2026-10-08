// /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x48, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h

UCLASS()
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() UStaticMesh* StaticMesh;  // 0x0030, size 0x8
    UPROPERTY() TArray<UMaterialInterface*> OverrideMaterials;  // 0x0038, size 0x10
};
