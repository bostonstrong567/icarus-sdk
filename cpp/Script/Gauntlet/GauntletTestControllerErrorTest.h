// /Script/Gauntlet.GauntletTestControllerErrorTest
// Derives from: UGauntletTestController > UObject
// size 0x50, declared in Engine/Plugins/Experimental/Gauntlet/Source/Gauntlet/Public/GauntletTestControllerErrorTest.h

UCLASS()
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
protected:
    float ErrorDelay;  // 0x0030, not reflected
    FString ErrorType;  // 0x0038, not reflected
    bool RunOnServer;  // 0x0048, not reflected
};
