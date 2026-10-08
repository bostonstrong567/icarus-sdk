// /Script/Gauntlet.GauntletTestControllerErrorTest
// Derives from: UGauntletTestController > UObject
// size 0x50, declared in Engine/Plugins/Experimental/Gauntlet/Source/Gauntlet/Public/GauntletTestControllerErrorTest.h

UCLASS()
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
public:

    // Not reflected: the engine's scripting cannot see these.
    float ErrorDelay;  // 0x0030, protected
    FString ErrorType;  // 0x0038, protected
    bool RunOnServer;  // 0x0048, protected
};
