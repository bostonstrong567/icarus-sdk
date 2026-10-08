// /Script/LiveLinkInterface.LiveLinkInterpolationSettings
// size 0x8, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkSourceSettings.h

USTRUCT()
struct FLiveLinkInterpolationSettings
{
    UPROPERTY(Deprecated) bool bUseInterpolation;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float InterpolationOffset;  // 0x0004, size 0x4
};
