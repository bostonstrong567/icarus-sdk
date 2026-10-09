// /Script/Engine.TextureSource
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture.h

USTRUCT()
struct FTextureSource
{
private:
    FUntypedBulkData2<unsigned char> BulkData;  // 0x0000, not reflected
    uint8 * LockedMipData;  // 0x0028, not reflected
    uint32 NumLockedMips;  // 0x0030, not reflected
};
