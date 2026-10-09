// /Script/DatasmithContent.DatasmithObjectTemplate
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithObjectTemplate.h

UCLASS(Abstract)
class UDatasmithObjectTemplate : public UObject
{
public:
    const bool bIsActorTemplate;  // 0x0028, not reflected

    // Virtual functions that start here:
    //   Equals, HasSameBase, Load, LoadRebase, UpdateObject
};
