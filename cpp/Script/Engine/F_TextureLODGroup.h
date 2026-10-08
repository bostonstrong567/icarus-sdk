// /Script/Engine.TextureLODGroup
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureLODSettings.h

USTRUCT()
struct FTextureLODGroup
{
    UPROPERTY() TEnumAsByte<TextureGroup> Group;  // 0x0000, size 0x1
    UPROPERTY() int32 LODBias;  // 0x000C, size 0x4
    UPROPERTY() int32 LODBias_Smaller;  // 0x0010, size 0x4
    UPROPERTY() int32 LODBias_Smallest;  // 0x0014, size 0x4
    UPROPERTY() int32 NumStreamedMips;  // 0x001C, size 0x4
    UPROPERTY() TEnumAsByte<TextureMipGenSettings> MipGenSettings;  // 0x0020, size 0x1
    UPROPERTY() int32 MinLODSize;  // 0x0024, size 0x4
    UPROPERTY() int32 MaxLODSize;  // 0x0028, size 0x4
    UPROPERTY() int32 MaxLODSize_Smaller;  // 0x002C, size 0x4
    UPROPERTY() int32 MaxLODSize_Smallest;  // 0x0030, size 0x4
    UPROPERTY() int32 OptionalLODBias;  // 0x0034, size 0x4
    UPROPERTY() int32 OptionalMaxLODSize;  // 0x0038, size 0x4
    UPROPERTY() FName MinMagFilter;  // 0x0040, size 0x8
    UPROPERTY() FName MipFilter;  // 0x0048, size 0x8
    UPROPERTY() ETextureMipLoadOptions MipLoadOptions;  // 0x0050, size 0x1
    UPROPERTY() bool HighPriorityLoad;  // 0x0051, size 0x1
    UPROPERTY() bool DuplicateNonOptionalMips;  // 0x0052, size 0x1
    UPROPERTY() float Downscale;  // 0x0054, size 0x4
    UPROPERTY() ETextureDownscaleOptions DownscaleOptions;  // 0x0058, size 0x1
    UPROPERTY() int32 VirtualTextureTileCountBias;  // 0x005C, size 0x4
    UPROPERTY() int32 VirtualTextureTileSizeBias;  // 0x0060, size 0x4
    UPROPERTY() TEnumAsByte<ETextureLossyCompressionAmount> LossyCompressionAmount;  // 0x0064, size 0x1

    // Not reflected:
    int32 MinLODMipCount;  // 0x0004
    int32 MaxLODMipCount;  // 0x0008
    ETextureSamplerFilter Filter;  // 0x0018
    int32 OptionalMaxLODMipCount;  // 0x003C
};
