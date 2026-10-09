// /Script/Engine.StreamingTextureBuildInfo
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureStreamingTypes.h

USTRUCT()
struct FStreamingTextureBuildInfo
{
public:
    UPROPERTY() uint32 PackedRelativeBox;  // 0x0000, size 0x4
    UPROPERTY() int32 TextureLevelIndex;  // 0x0004, size 0x4
    UPROPERTY() float TexelFactor;  // 0x0008, size 0x4
};
