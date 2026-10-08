// /Game/UI/Hab/EXPERIMENTAL/UMG_TitleScreen_Background_Base_4.UMG_TitleScreen_Background_Base_4_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2AC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TitleScreen_Background_Base_4_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BackgroundParallax;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* BackLayer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* FrontLayer;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* MiddleLayer;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* person;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* polarbear;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SmoothingMousePosition;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Layer;  // 0x02A8, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TitleScreen_Background_Base_4(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Mouse_Parallax();  // named "Mouse Parallax"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Smooth_Mouse_Position(FVector2D MousePosition, float DeltaTime);  // parameters 0xC, named "Update Smooth Mouse Position"
};
