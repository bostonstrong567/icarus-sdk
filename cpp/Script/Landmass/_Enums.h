// /Script/Landmass.EBrushBlendType
UENUM()
enum class EBrushBlendType : uint8
{
    AlphaBlend = 0,
    Min = 1,
    Max = 2,
    Additive = 3,
};

// /Script/Landmass.EBrushFalloffMode
UENUM()
enum class EBrushFalloffMode : uint8
{
    Angle = 0,
    Width = 1,
};
