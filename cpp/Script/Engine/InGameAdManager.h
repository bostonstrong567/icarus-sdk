// /Script/Engine.InGameAdManager
// Derives from: UPlatformInterfaceBase > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Engine/InGameAdManager.h

UCLASS(Transient)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
    UPROPERTY() uint8 bShouldPauseWhileAdOpen : 1;  // 0x0038, mask 0x01
    UPROPERTY() TArray<FOnUserClickedBanner> ClickedBannerDelegates;  // 0x0040, size 0x10
    UPROPERTY() TArray<FOnUserClosedAdvertisement> ClosedAdDelegates;  // 0x0050, size 0x10

    // Virtual functions that start here:
    //   AddClickedBannerDelegate, AddClosedAdDelegate, ClearClickedBannerDelegate, ClearClosedAdDelegate
    //   ForceCloseAd, HideBanner, Init, SetPauseWhileAdOpen, ShowBanner
};
