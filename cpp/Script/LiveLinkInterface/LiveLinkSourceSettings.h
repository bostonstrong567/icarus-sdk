// /Script/LiveLinkInterface.LiveLinkSourceSettings
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkSourceSettings.h

UCLASS()
class ULiveLinkSourceSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere) ELiveLinkSourceMode Mode;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) FLiveLinkSourceBufferManagementSettings BufferSettings;  // 0x0030, size 0x58
    UPROPERTY(EditAnywhere) FString ConnectionString;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere) TSubclassOf<ULiveLinkSourceFactory> Factory;  // 0x0098, size 0x8
};
