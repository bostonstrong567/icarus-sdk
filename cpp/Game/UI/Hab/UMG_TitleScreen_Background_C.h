// /Game/UI/Hab/UMG_TitleScreen_Background.UMG_TitleScreen_Background_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x29C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TitleScreen_Background_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BackgroundParallax;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* BackLayer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* MiddleLayer;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* midground;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SmoothingMousePosition;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartingTime;  // 0x0298, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TitleScreen_Background(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Smooth_Mouse_Position(FVector2D MousePosition, float DeltaTime);  // parameters 0xC, named "Update Smooth Mouse Position"
    UFUNCTION(BlueprintCallable) void UpdateParallax();
};
