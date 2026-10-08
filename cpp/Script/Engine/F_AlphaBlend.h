// /Script/Engine.AlphaBlend
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/AlphaBlend.h

USTRUCT()
struct FAlphaBlend
{
    UPROPERTY(EditAnywhere) UCurveFloat* CustomCurve;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float BlendTime;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) EAlphaBlendOption BlendOption;  // 0x0024, size 0x1

    // Not reflected:
    float AlphaLerp;  // 0x000C
    float AlphaBlend;  // 0x0010
    float BlendTimeRemaining;  // 0x0014
    float BlendedValue;  // 0x0018
    float BeginValue;  // 0x001C
    float DesiredValue;  // 0x0020
    bool bNeedsToResetAlpha;  // 0x0025
    bool bNeedsToResetBlendTime;  // 0x0026
    bool bNeedsToResetCachedDesiredBlendedValue;  // 0x0027
    float CachedDesiredBlendedValue;  // 0x0028
};
