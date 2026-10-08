// /Script/AvfMediaFactory.AvfMediaSettings
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Media/AvfMedia/Source/AvfMediaFactory/Public/AvfMediaSettings.h

UCLASS(Config=Engine)
class UAvfMediaSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool NativeAudioOut;  // 0x0028, size 0x1
};
