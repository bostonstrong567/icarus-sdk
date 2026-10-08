// /Game/UI/Projection/AI/W_ProjectionPopup_SlugBoss.W_ProjectionPopup_SlugBoss_C
// Derives from: UW_ProjectionPopup_AlertBase_C > UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3F4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_SlugBoss_C : public UW_ProjectionPopup_AlertBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ArmourBar;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Health_1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* HealthBar;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Healthbar_Deco1;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Healthbar_Deco1_1;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HealthOverlay;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Armour;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_170;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_415;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* PerceptionRetainerBox;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BossLevel_C* UMG_BossLevel;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* HealthCurve;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateVisibilitySmoothed;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateVisibility;  // 0x03CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NamePlateInterpSpeed;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmourValue;  // 0x03D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmourValueSmoothed;  // 0x03D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HealthValueDelay;  // 0x03DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> CurrentSlugs;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AddedPercentages;  // 0x03F0, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_SlugBoss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverridePlacement(FVector2D& Location, float& ScaleAlpha, FVector2D& Alignment, bool& UseOpacity);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCreatureEpic();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldUseOverride();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickHealthVisuals();
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateAlertVisibility();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
