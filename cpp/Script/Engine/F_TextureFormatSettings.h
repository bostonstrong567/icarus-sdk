// /Script/Engine.TextureFormatSettings
// size 0x2, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture.h

USTRUCT()
struct FTextureFormatSettings
{
public:
    UPROPERTY() TEnumAsByte<TextureCompressionSettings> CompressionSettings;  // 0x0000, size 0x1
    UPROPERTY() uint8 CompressionNoAlpha : 1;  // 0x0001, mask 0x01
    UPROPERTY() uint8 CompressionNone : 1;  // 0x0001, mask 0x02
    UPROPERTY() uint8 CompressionYCoCg : 1;  // 0x0001, mask 0x04
    UPROPERTY() uint8 SRGB : 1;  // 0x0001, mask 0x08
};
