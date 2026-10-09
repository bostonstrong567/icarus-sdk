// /Script/LiveLink.LiveLinkSettings
// Derives from: UObject
// size 0xD0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkSettings.h

UCLASS(Config=Game)
class ULiveLinkSettings : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Config) TSubclassOf<ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, Config) TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, Config) FDirectoryPath PresetSaveDir;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, Config) float ClockOffsetCorrectionStep;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, Config) ELiveLinkSourceMode DefaultMessageBusSourceMode;  // 0x007C, size 0x1
    UPROPERTY(EditAnywhere, Config) double MessageBusPingRequestFrequency;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, Config) double MessageBusHeartbeatFrequency;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, Config) double MessageBusHeartbeatTimeout;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, Config) double MessageBusTimeBeforeRemovingInactiveSource;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, Config) double TimeWithoutFrameToBeConsiderAsInvalid;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, Config) FLinearColor ValidColor;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, Config) FLinearColor InvalidColor;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, Config) uint8 TextSizeSource;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 TextSizeSubject;  // 0x00C9, size 0x1
protected:
    UPROPERTY(EditAnywhere, Config) TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings;  // 0x0028, size 0x10
};
