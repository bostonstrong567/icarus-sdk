// /Script/LiveLink.LiveLinkRoleProjectSetting
// size 0x28, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkSettings.h

USTRUCT()
struct FLiveLinkRoleProjectSetting
{
public:
    UPROPERTY(EditAnywhere, Config) TSubclassOf<ULiveLinkRole> Role;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Config) TSubclassOf<ULiveLinkSubjectSettings> SettingClass;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, Config) TSubclassOf<ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, Config) TArray<TSubclassOf<ULiveLinkFramePreProcessor>> FramePreProcessors;  // 0x0018, size 0x10
};
