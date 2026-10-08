// /Script/Engine.CurveAtlasColorAdjustments
// size 0x24, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h

USTRUCT()
struct FCurveAtlasColorAdjustments
{
    UPROPERTY() uint8 bChromaKeyTexture : 1;  // 0x0000, mask 0x01
    UPROPERTY() float AdjustBrightness;  // 0x0004, size 0x4
    UPROPERTY() float AdjustBrightnessCurve;  // 0x0008, size 0x4
    UPROPERTY() float AdjustVibrance;  // 0x000C, size 0x4
    UPROPERTY() float AdjustSaturation;  // 0x0010, size 0x4
    UPROPERTY() float AdjustRGBCurve;  // 0x0014, size 0x4
    UPROPERTY() float AdjustHue;  // 0x0018, size 0x4
    UPROPERTY() float AdjustMinAlpha;  // 0x001C, size 0x4
    UPROPERTY() float AdjustMaxAlpha;  // 0x0020, size 0x4
};
