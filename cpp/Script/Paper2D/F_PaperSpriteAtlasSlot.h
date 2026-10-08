// /Script/Paper2D.PaperSpriteAtlasSlot
// size 0x40, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteAtlas.h

USTRUCT()
struct FPaperSpriteAtlasSlot
{
    UPROPERTY() TSoftObjectPtr<UPaperSprite> SpriteRef;  // 0x0000, size 0x28
    UPROPERTY() int32 AtlasIndex;  // 0x0028, size 0x4
    UPROPERTY() int32 X;  // 0x002C, size 0x4
    UPROPERTY() int32 Y;  // 0x0030, size 0x4
    UPROPERTY() int32 Width;  // 0x0034, size 0x4
    UPROPERTY() int32 Height;  // 0x0038, size 0x4
};
