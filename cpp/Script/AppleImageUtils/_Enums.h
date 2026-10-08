// /Script/AppleImageUtils.EAppleTextureType
UENUM()
enum class EAppleTextureType : uint8
{
    Unknown = 0,
    Image = 1,
    PixelBuffer = 2,
    Surface = 3,
    MetalTexture = 4,
};

// /Script/AppleImageUtils.ETextureRotationDirection
UENUM()
enum class ETextureRotationDirection : uint8
{
    None = 0,
    Left = 1,
    Right = 2,
    Down = 3,
    LeftMirrored = 4,
    RightMirrored = 5,
    DownMirrored = 6,
    UpMirrored = 7,
};
