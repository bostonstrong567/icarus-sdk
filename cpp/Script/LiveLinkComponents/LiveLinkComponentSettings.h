// /Script/LiveLinkComponents.LiveLinkComponentSettings
// Derives from: UObject
// size 0x78, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkComponents/Public/LiveLinkComponentSettings.h

UCLASS(Config=Game)
class ULiveLinkComponentSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) TMap<TSubclassOf<ULiveLinkRole>, TSubclassOf<ULiveLinkControllerBase>> DefaultControllerForRole;  // 0x0028, size 0x50
};
