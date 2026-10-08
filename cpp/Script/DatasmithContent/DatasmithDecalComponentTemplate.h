// /Script/DatasmithContent.DatasmithDecalComponentTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0x48, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithDecalComponentTemplate.h

UCLASS()
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() int32 SortOrder;  // 0x0030, size 0x4
    UPROPERTY() FVector DecalSize;  // 0x0034, size 0xC
    UPROPERTY() UMaterialInterface* Material;  // 0x0040, size 0x8
};
