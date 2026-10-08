// /Game/UI/Projection/Fishing/W_ProjectionPopup_Fishing.W_ProjectionPopup_Fishing_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_Fishing_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EyeImage;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Perception;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* PerceptionRetainerBox;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Vertical;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WidgetOpacity;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UImage* Eye_Image;  // 0x02E0, size 0x8, named "Eye Image"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_Fishing(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void ToggleUI();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
