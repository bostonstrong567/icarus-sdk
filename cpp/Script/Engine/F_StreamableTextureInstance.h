// /Script/Engine.StreamableTextureInstance
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/Level.h

USTRUCT()
struct FStreamableTextureInstance
{
public:
    FBoxSphereBounds Bounds;  // 0x0000, not reflected
    float MinDistance;  // 0x001C, not reflected
    float MaxDistance;  // 0x0020, not reflected
    float TexelFactor;  // 0x0024, not reflected
};
