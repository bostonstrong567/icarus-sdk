// /Script/UMG.WidgetComponentInstanceData
// size 0xC8, declared in Engine/Source/Runtime/UMG/Public/Components/WidgetComponent.h

USTRUCT()
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
public:
    TSubclassOf<UUserWidget> WidgetClass;  // 0x00B8, not reflected
    UTextureRenderTarget2D * RenderTarget;  // 0x00C0, not reflected
};
