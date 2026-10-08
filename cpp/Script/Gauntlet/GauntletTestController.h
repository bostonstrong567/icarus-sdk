// /Script/Gauntlet.GauntletTestController
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Experimental/Gauntlet/Source/Gauntlet/Public/GauntletTestController.h

UCLASS()
class UGauntletTestController : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FGauntletModule * ParentModule;  // 0x0028, private

    // Virtual functions that start here:
    //   OnInit, OnPostMapChange, OnPreMapChange, OnStateChange, OnTick
};
