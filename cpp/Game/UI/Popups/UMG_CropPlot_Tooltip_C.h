// /Game/UI/Popups/UMG_CropPlot_Tooltip.UMG_CropPlot_Tooltip_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x444, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CropPlot_Tooltip_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* TooltipFadeIn;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BulkyBorder;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BulkyImage;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BulkyOverlay;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BulkyText;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* CropDurability;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CropDurabilityPercent;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CropOverlay;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CropTierBox;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Durability;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DurabilityOverlay;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DurabilityPercent;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FillableProgressBar_C* Fillable;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_76;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_129;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_192;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NotOwner;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OutsideBorder;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* OutsideImage;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* OutsideOverlay;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Owner;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seed_Text;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SeedInfo;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ShelterBorder;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ShelterImage;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ShelterOverlay;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* ShipOwnerDisplay;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stack;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StackBorder;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Capacity;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CropPlot_CultivationRow_C* UMG_CropPlot_CultivationRow;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CropPlotTier_C* UMG_CropPlotTier;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InteractionPrompt_C* UMG_InteractionPrompt;  // 0x03F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInteractableRowHandle> InteractablesToShowStatic;  // 0x0400, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowShelteredIcon;  // 0x0410, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowElectricIcon;  // 0x0411, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowWaterIcon;  // 0x0412, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowOutsideIcon;  // 0x0413, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query_Bulky;  // 0x0414, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query_Shield;  // 0x042C, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CropPlot_Tooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCapacityText(FIcarusResourcesEnum ResourceType, float Amount, FText& Text);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void GetOverridePlacement(FVector2D& Location, float& ScaleAlpha, FVector2D& Alignment, bool& UseOpacity);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor Get_Durability_FillColor();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ProjectionItemChanged();
    UFUNCTION(BlueprintCallable) void SetProjectionActor(UBP_UIProjectionComponent_C* ProjectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldUseOverride();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateToolTip(AIcarusActor* InputItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
