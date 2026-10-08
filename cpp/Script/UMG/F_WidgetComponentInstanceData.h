// /Script/UMG.WidgetComponentInstanceData
// size 0xC8, declared in Engine/Source/Runtime/UMG/Public/Components/WidgetComponent.h

USTRUCT()
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{

    // Not reflected:
    TSubclassOf<UUserWidget> WidgetClass;  // 0x00B8
    UTextureRenderTarget2D * RenderTarget;  // 0x00C0
};
