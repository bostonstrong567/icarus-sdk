// /Game/UI/Popups/UMG_TamingTooltip.UMG_TamingTooltip_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x440, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TamingTooltip_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* TooltipFadeIn;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_LikesDislikes;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Health;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HealthOverlay;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HealthPercent;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Survival;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_76;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_192;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Line;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ModifiersBorder;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ModifiersImage;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ModifiersOverlay;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ModifiersStatus;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NotOwner;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NutritionBorder;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NutritionImage;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NutritionOverlay;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NutritionStatus;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Owner;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ParentageBox;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SexImage;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ShelterBorder;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ShelterImage;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ShelterOverlay;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ShelterStatus;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Taming;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* TamingOverlay;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TamingPercent;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Modifier_Dislikes;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Modifier_Requires;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_TamedBy;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_TameHunger;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_TameTemperature;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* TopDisplay;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InteractionPrompt_C* UMG_InteractionPrompt;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TameParent_C* UMG_TameParent;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_NeedsDescription;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* WarmthBorder;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WarmthImage;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* WarmthOverlay;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WarmthStatus;  // 0x0438, size 0x8

    UFUNCTION(BlueprintCallable) void BuildModifierStatesDescription(FText& WantsText, bool& WantsModifierStates, FText& DislikesText, bool& DislikesModifierStates) const;  // parameters 0x39
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TamingTooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverridePlacement(FVector2D& Location, float& ScaleAlpha, FVector2D& Alignment, bool& UseOpacity);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void OnModifierStateUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetProjectionActor(UBP_UIProjectionComponent_C* ProjectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldUseOverride();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateToolTip(AActor* InputActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
