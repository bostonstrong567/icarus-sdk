// /Script/Engine.AlphaBlend
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/AlphaBlend.h

USTRUCT()
struct FAlphaBlend
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) UCurveFloat* CustomCurve;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float BlendTime;  // 0x0008, size 0x4
    float AlphaLerp;  // 0x000C, not reflected
    float AlphaBlend;  // 0x0010, not reflected
    float BlendTimeRemaining;  // 0x0014, not reflected
    float BlendedValue;  // 0x0018, not reflected
    float BeginValue;  // 0x001C, not reflected
    float DesiredValue;  // 0x0020, not reflected
    UPROPERTY(EditAnywhere) EAlphaBlendOption BlendOption;  // 0x0024, size 0x1
    bool bNeedsToResetAlpha;  // 0x0025, not reflected
    bool bNeedsToResetBlendTime;  // 0x0026, not reflected
    bool bNeedsToResetCachedDesiredBlendedValue;  // 0x0027, not reflected
    float CachedDesiredBlendedValue;  // 0x0028, not reflected
};
