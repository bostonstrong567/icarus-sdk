// /Script/Engine.VirtualTextureBuildSettings
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/VT/VirtualTextureBuildSettings.h

USTRUCT()
struct FVirtualTextureBuildSettings
{
    UPROPERTY() int32 TileSize;  // 0x0000, size 0x4
    UPROPERTY() int32 TileBorderSize;  // 0x0004, size 0x4
    UPROPERTY() bool bEnableCompressCrunch;  // 0x0008, size 0x1
    UPROPERTY() bool bEnableCompressZlib;  // 0x0009, size 0x1
};
