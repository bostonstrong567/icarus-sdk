// /Game/UI/Hab/EXPERIMENTAL/UMG_TitleScreen_Parallax_Background.UMG_TitleScreen_Parallax_Background_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x284, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TitleScreen_Parallax_Background_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BackgroundParallax;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SmoothingMousePosition;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Layer;  // 0x0280, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TitleScreen_Parallax_Background(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
