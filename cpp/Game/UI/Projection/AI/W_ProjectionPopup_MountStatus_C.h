// /Game/UI/Projection/AI/W_ProjectionPopup_MountStatus.W_ProjectionPopup_MountStatus_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x338, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_MountStatus_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowHide;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertFrame_1;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertLines;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertLines_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* CurrentAction;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EyeImage;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_CurrentAction;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Perception;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* PerceptionRetainerBox;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Vertical;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Vertical_1;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AlertInterpSpeed;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* ColourCurve;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HealthInterpSpeed;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Eating_or_Drinking;  // 0x032C, size 0x1, named "Is Eating or Drinking"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountAction MountState;  // 0x032D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* LastStateIcon;  // 0x0330, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_MountStatus(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
