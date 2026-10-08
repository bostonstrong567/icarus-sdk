// /Script/Engine.ColorGradingSettings
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FColorGradingSettings
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FColorGradePerRangeSettings Global;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FColorGradePerRangeSettings Shadows;  // 0x0050, size 0x50
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FColorGradePerRangeSettings Midtones;  // 0x00A0, size 0x50
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FColorGradePerRangeSettings Highlights;  // 0x00F0, size 0x50
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ShadowsMax;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float HighlightsMin;  // 0x0144, size 0x4
};
