// /Script/LiveLinkInterface.LiveLinkCurveConversionSettings
// size 0x50, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkCurveRemapSettings.h

USTRUCT()
struct FLiveLinkCurveConversionSettings
{
public:
    UPROPERTY(EditAnywhere) TMap<FString, FSoftObjectPath> CurveConversionAssetMap;  // 0x0000, size 0x50
};
