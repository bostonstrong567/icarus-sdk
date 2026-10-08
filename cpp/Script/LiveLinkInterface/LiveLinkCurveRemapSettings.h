// /Script/LiveLinkInterface.LiveLinkCurveRemapSettings
// Derives from: ULiveLinkSourceSettings > UObject
// size 0xF0, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkCurveRemapSettings.h

UCLASS(Config=Engine)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FLiveLinkCurveConversionSettings CurveConversionSettings;  // 0x00A0, size 0x50
};
