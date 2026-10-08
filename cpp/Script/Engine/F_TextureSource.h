// /Script/Engine.TextureSource
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture.h

USTRUCT()
struct FTextureSource
{

    // Not reflected:
    FUntypedBulkData2<unsigned char> BulkData;  // 0x0000
    uint8 * LockedMipData;  // 0x0028
    uint32 NumLockedMips;  // 0x0030
};
