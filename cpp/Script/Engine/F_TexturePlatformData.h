// /Script/Engine.TexturePlatformData
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture.h

USTRUCT()
struct FTexturePlatformData
{
public:
    int32 SizeX;  // 0x0000, not reflected
    int32 SizeY;  // 0x0004, not reflected
    uint32 PackedData;  // 0x0008, not reflected
    EPixelFormat PixelFormat;  // 0x000C, not reflected
    FOptTexturePlatformData OptData;  // 0x0010, not reflected
    TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32> > Mips;  // 0x0018, not reflected
    FVirtualTextureBuiltData * VTData;  // 0x0028, not reflected
};
