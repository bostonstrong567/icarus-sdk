// /Script/Paper2D.PaperFlipbookKeyFrame
// size 0x10, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h

USTRUCT()
struct FPaperFlipbookKeyFrame
{
    UPROPERTY(EditAnywhere) UPaperSprite* Sprite;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 FrameRun;  // 0x0008, size 0x4
};
