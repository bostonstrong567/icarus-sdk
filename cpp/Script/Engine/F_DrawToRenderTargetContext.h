// /Script/Engine.DrawToRenderTargetContext
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetRenderingLibrary.h

USTRUCT()
struct FDrawToRenderTargetContext
{
public:
    UPROPERTY() UTextureRenderTarget2D* RenderTarget;  // 0x0000, size 0x8
    FDrawEvent * DrawEvent;  // 0x0008, not reflected
};
