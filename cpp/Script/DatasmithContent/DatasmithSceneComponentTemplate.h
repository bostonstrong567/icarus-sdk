// /Script/DatasmithContent.DatasmithSceneComponentTemplate
// Derives from: UDatasmithObjectTemplate > UObject
// size 0xF0, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithSceneComponentTemplate.h

UCLASS()
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
    UPROPERTY() FTransform RelativeTransform;  // 0x0030, size 0x30
    UPROPERTY() TEnumAsByte<EComponentMobility> Mobility;  // 0x0060, size 0x1
    UPROPERTY(Instanced) TSoftObjectPtr<USceneComponent> AttachParent;  // 0x0068, size 0x28
    UPROPERTY() bool bVisible;  // 0x0090, size 0x1
    UPROPERTY() TSet<FName> Tags;  // 0x0098, size 0x50
};
