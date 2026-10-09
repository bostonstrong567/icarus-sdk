// /Script/Foliage.FoliageVertexColorChannelMask
// size 0xC, declared in Engine/Source/Runtime/Foliage/Public/FoliageType.h

USTRUCT()
struct FFoliageVertexColorChannelMask
{
public:
    UPROPERTY(EditAnywhere) uint8 UseMask : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) float MaskThreshold;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) uint8 InvertMask : 1;  // 0x0008, mask 0x01
};
