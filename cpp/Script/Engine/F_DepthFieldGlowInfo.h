// /Script/Engine.DepthFieldGlowInfo
// size 0x24, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FDepthFieldGlowInfo
{
public:
    UPROPERTY(BlueprintReadWrite) uint8 bEnableGlow : 1;  // 0x0000, mask 0x01
    UPROPERTY(BlueprintReadWrite) FLinearColor GlowColor;  // 0x0004, size 0x10
    UPROPERTY(BlueprintReadWrite) FVector2D GlowOuterRadius;  // 0x0014, size 0x8
    UPROPERTY(BlueprintReadWrite) FVector2D GlowInnerRadius;  // 0x001C, size 0x8
};
