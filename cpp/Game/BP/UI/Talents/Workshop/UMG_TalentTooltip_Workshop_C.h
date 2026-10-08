// /Game/BP/UI/Talents/Workshop/UMG_TalentTooltip_Workshop.UMG_TalentTooltip_Workshop_C
// Derives from: UTalentTooltipWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x358, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentTooltip_Workshop_C : public UTalentTooltipWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ExpandProgress_Instant;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ExpandProgress;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* background;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintFlavour;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Click;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CraftedAtOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DynamicContent;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ExpandProgressBar;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Variations;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* InputIcon;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemDescription;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MetaName;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ReplicationCost;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RequiredMatsSection;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ResearchCost;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* shape;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopGlow;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemStats_C* UMG_ItemStats;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockImage;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VariationText;  // 0x0350, size 0x8

    UFUNCTION(BlueprintCallable) void AddDynamicContent(UUserWidget* WidgetToAdd);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearDynamicContent();
    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentTooltip_Workshop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void PlayHoverAnimation();
    UFUNCTION(BlueprintCallable) void Update_Item_Stats(FItemData Item1);  // parameters 0x1F0, named "Update Item Stats"
};
