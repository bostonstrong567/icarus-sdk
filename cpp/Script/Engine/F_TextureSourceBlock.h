// /Script/Engine.TextureSourceBlock
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture.h

USTRUCT()
struct FTextureSourceBlock
{
public:
    UPROPERTY(EditAnywhere) int32 BlockX;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 BlockY;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 SizeX;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 SizeY;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 NumSlices;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) int32 NumMips;  // 0x0014, size 0x4
};
