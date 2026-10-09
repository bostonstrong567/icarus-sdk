// /Script/Engine.VirtualTextureSpacePoolConfig
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/VT/VirtualTexturePoolConfig.h

USTRUCT()
struct FVirtualTextureSpacePoolConfig
{
public:
    UPROPERTY() int32 MinTileSize;  // 0x0000, size 0x4
    UPROPERTY() int32 MaxTileSize;  // 0x0004, size 0x4
    UPROPERTY() TArray<TEnumAsByte<EPixelFormat>> Formats;  // 0x0008, size 0x10
    UPROPERTY() int32 SizeInMegabyte;  // 0x0018, size 0x4
    UPROPERTY() bool bAllowSizeScale;  // 0x001C, size 0x1
    UPROPERTY() uint32 ScalabilityGroup;  // 0x0020, size 0x4
};
