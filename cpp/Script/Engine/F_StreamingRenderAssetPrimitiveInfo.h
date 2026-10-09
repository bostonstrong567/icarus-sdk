// /Script/Engine.StreamingRenderAssetPrimitiveInfo
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureStreamingTypes.h

USTRUCT()
struct FStreamingRenderAssetPrimitiveInfo
{
public:
    UPROPERTY() UStreamableRenderAsset* RenderAsset;  // 0x0000, size 0x8
    UPROPERTY() FBoxSphereBounds Bounds;  // 0x0008, size 0x1C
    UPROPERTY() float TexelFactor;  // 0x0024, size 0x4
    UPROPERTY() uint32 PackedRelativeBox;  // 0x0028, size 0x4
    UPROPERTY(Transient) uint8 bAllowInvalidTexelFactorWhenUnregistered : 1;  // 0x002C, mask 0x01
};
