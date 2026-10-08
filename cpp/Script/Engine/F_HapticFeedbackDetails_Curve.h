// /Script/Engine.HapticFeedbackDetails_Curve
// size 0x110, declared in Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Curve.h

USTRUCT()
struct FHapticFeedbackDetails_Curve
{
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Frequency;  // 0x0000, size 0x88
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Amplitude;  // 0x0088, size 0x88
};
