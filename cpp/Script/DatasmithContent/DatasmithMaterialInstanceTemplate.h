// /Script/DatasmithContent.DatasmithMaterialInstanceTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x198, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h

UCLASS()
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() TSoftObjectPtr<UMaterialInterface> ParentMaterial;  // 0x0030, size 0x28
    UPROPERTY() TMap<FName, float> ScalarParameterValues;  // 0x0058, size 0x50
    UPROPERTY() TMap<FName, FLinearColor> VectorParameterValues;  // 0x00A8, size 0x50
    UPROPERTY() TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues;  // 0x00F8, size 0x50
    UPROPERTY() FDatasmithStaticParameterSetTemplate StaticParameters;  // 0x0148, size 0x50

    // Virtual functions that start here:
    //   LoadAll
};
