// /Game/UI/Popups/UMG_ThumperMiniTooltip.UMG_ThumperMiniTooltip_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3CB, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ThumperMiniTooltip_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* TooltipFadeIn;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DecayOverlay;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DecayPercent;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* DecayProgress;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Durability;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DurabilityOverlay;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DurabilityPercent;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FillableProgressBar_C* Fillable;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_129;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_192;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ShelterBorder;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ShelterImage;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ShelterOverlay;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stack;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StackBorder;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ResourceCount;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_RiskLevel;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_RiskTitle;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ThumperInfo;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ThumperInfo_1;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ThumperProgress;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Capacity;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ThumperProgress;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ThumperProgressOverlay;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InteractionPrompt_C* UMG_InteractionPrompt;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInteractableRowHandle> InteractablesToShowStatic;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowShelteredIcon;  // 0x03C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowElectricIcon;  // 0x03C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowWaterIcon;  // 0x03CA, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ThumperMiniTooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverridePlacement(FVector2D& Location, float& ScaleAlpha, FVector2D& Alignment, bool& UseOpacity);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor Get_Durability_FillColor();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ProjectionItemChanged();
    UFUNCTION(BlueprintCallable) void SetProjectionActor(UBP_UIProjectionComponent_C* ProjectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldUseOverride();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateToolTip(AIcarusActor* InputItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
