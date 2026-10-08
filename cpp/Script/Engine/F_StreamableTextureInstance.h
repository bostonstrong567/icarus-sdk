// /Script/Engine.StreamableTextureInstance
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/Level.h

USTRUCT()
struct FStreamableTextureInstance
{

    // Not reflected:
    FBoxSphereBounds Bounds;  // 0x0000
    float MinDistance;  // 0x001C
    float MaxDistance;  // 0x0020
    float TexelFactor;  // 0x0024
};
