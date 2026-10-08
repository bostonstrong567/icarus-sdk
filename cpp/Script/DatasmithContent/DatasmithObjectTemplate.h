// /Script/DatasmithContent.DatasmithObjectTemplate
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithObjectTemplate.h

UCLASS(Abstract)
class UDatasmithObjectTemplate : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    const bool bIsActorTemplate;  // 0x0028

    // Virtual functions that start here:
    //   Equals, HasSameBase, Load, LoadRebase, UpdateObject
};
