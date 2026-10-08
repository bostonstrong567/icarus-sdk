// /Script/Paper2D.PaperSpriteSocket
// size 0x40, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h

USTRUCT()
struct FPaperSpriteSocket
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTransform LocalTransform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SocketName;  // 0x0030, size 0x8
};
