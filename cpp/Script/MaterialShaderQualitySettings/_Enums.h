// /Script/MaterialShaderQualitySettings.EMobileShadowQuality
UENUM()
enum class EMobileShadowQuality : uint8
{
    NoFiltering = 0,
    PCF_1x1 = 1,
    PCF_2x2 = 2,
    PCF_3x3 = 3,
};
