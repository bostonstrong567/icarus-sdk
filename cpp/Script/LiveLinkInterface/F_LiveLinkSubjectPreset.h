// /Script/LiveLinkInterface.LiveLinkSubjectPreset
// size 0x38, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkPresetTypes.h

USTRUCT()
struct FLiveLinkSubjectPreset
{
public:
    UPROPERTY(EditAnywhere) FLiveLinkSubjectKey Key;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere) TSubclassOf<ULiveLinkRole> Role;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) ULiveLinkSubjectSettings* Settings;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) ULiveLinkVirtualSubject* VirtualSubject;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) bool bEnabled;  // 0x0030, size 0x1
};
