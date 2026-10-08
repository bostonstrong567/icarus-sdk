// /Script/DatasmithContent.DatasmithActorTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0xD0, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithActorTemplate.h

UCLASS()
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() TSet<FName> Layers;  // 0x0030, size 0x50
    UPROPERTY() TSet<FName> Tags;  // 0x0080, size 0x50
};
