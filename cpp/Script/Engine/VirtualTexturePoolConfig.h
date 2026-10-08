// /Script/Engine.VirtualTexturePoolConfig
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/VT/VirtualTexturePoolConfig.h

UCLASS(Transient, Config=Engine)
class UVirtualTexturePoolConfig : public UObject
{
public:
    UPROPERTY(Config) int32 DefaultSizeInMegabyte;  // 0x0028, size 0x4
    UPROPERTY(Config) TArray<FVirtualTextureSpacePoolConfig> Pools;  // 0x0030, size 0x10
};
