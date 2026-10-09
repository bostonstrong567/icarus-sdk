// /Script/Paper2D.SpriteDrawCallRecord
// size 0xD0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteDrawCall.h

USTRUCT()
struct FSpriteDrawCallRecord
{
public:
    UPROPERTY() FVector Destination;  // 0x0000, size 0xC
    UPROPERTY() UTexture* BaseTexture;  // 0x0010, size 0x8
    TArray<UTexture *,TInlineAllocator<4,TSizedDefaultAllocator<32> > > AdditionalTextures;  // 0x0018, not reflected
    UPROPERTY() FColor Color;  // 0x0048, size 0x4
    TArray<FVector4,TInlineAllocator<6,TSizedDefaultAllocator<32> > > RenderVerts;  // 0x0050, not reflected
};
