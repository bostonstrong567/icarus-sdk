// /Script/Engine.FontRenderInfo
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FFontRenderInfo
{
    UPROPERTY(BlueprintReadWrite) uint8 bClipText : 1;  // 0x0000, mask 0x01
    UPROPERTY(BlueprintReadWrite) uint8 bEnableShadow : 1;  // 0x0000, mask 0x02
    UPROPERTY(BlueprintReadWrite) FDepthFieldGlowInfo GlowInfo;  // 0x0004, size 0x24
};
