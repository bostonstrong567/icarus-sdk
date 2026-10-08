// /Game/UI/Projection/AI/W_ProjectionPopup_Alert_1.W_ProjectionPopup_Alert_1_C
// Derives from: UW_ProjectionPopup_AlertBase_C > UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x41C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_Alert_1_C : public UW_ProjectionPopup_AlertBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertFrame;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertFrame_1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertFrame_2;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlertLines;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Armor;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ArmorBar;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ArmorContainer;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* CustomAction;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* EatingOrDrinking;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EyeImage;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EyeImage_CustomAction;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EyeImage_EatingDrinking;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Health_1;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* HealthBar;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HealthOverlay;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_170;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Perception;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* PerceptionRetainerBox;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Vertical;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Vertical_1;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Vertical_2;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_Offset;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AnimalLevel_C* UMG_AnimalLevel_C_6;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* HealthCurve;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateVisibilitySmoothed;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateVisibility;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateInterpSpeed;  // 0x0418, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_Alert_1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCreatureEpic();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickAlertVisuals();
    UFUNCTION(BlueprintCallable) void TickArmorVisuals();
    UFUNCTION(BlueprintCallable) void TickHealthVisuals();
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateAlertVisibility();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
