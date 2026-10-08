// /Script/Engine.TexturePlatformData
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture.h

USTRUCT()
struct FTexturePlatformData
{

    // Not reflected:
    int32 SizeX;  // 0x0000
    int32 SizeY;  // 0x0004
    uint32 PackedData;  // 0x0008
    EPixelFormat PixelFormat;  // 0x000C
    FOptTexturePlatformData OptData;  // 0x0010
    TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32> > Mips;  // 0x0018
    FVirtualTextureBuiltData * VTData;  // 0x0028
};
