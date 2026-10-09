// /Script/Engine.FontCharacter
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/Font.h

USTRUCT()
struct FFontCharacter
{
public:
    UPROPERTY(EditAnywhere) int32 StartU;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 StartV;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 USize;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 VSize;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) uint8 TextureIndex;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere) int32 VerticalOffset;  // 0x0014, size 0x4
};
