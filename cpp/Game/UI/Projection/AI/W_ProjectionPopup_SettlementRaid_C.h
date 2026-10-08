// /Game/UI/Projection/AI/W_ProjectionPopup_SettlementRaid.W_ProjectionPopup_SettlementRaid_C
// Derives from: UW_ProjectionPopup_AlertBase_C > UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_SettlementRaid_C : public UW_ProjectionPopup_AlertBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Healthbar_Deco1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Healthbar_Deco1_1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Timer;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_170;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_415;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* PerceptionRetainerBox;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ProgressOverlay;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RaidProgress;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RaidTitle;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Progress;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* TimerBar;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* HealthCurve;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateVisibilitySmoothed;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateVisibility;  // 0x03CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateInterpSpeed;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* OwningSettlement;  // 0x03D8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_SettlementRaid(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOpacityDistanceRanges(float& NearbyDistanceStart, float& NearbyDistanceEnd) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetOverridePlacement(FVector2D& Location, float& ScaleAlpha, FVector2D& Alignment, bool& UseOpacity);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCreatureEpic();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldUseOverride();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickHealthVisuals();
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateAlertVisibility();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
