// /Script/Paper2D.SpriteInstanceData
// size 0x50, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperGroupedSpriteComponent.h

USTRUCT()
struct FSpriteInstanceData
{
    UPROPERTY(EditAnywhere) FMatrix Transform;  // 0x0000, size 0x40
    UPROPERTY(EditAnywhere) UPaperSprite* SourceSprite;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) FColor VertexColor;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) int32 MaterialIndex;  // 0x004C, size 0x4
};
