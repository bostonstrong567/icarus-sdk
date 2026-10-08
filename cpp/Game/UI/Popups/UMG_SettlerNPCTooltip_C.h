// /Game/UI/Popups/UMG_SettlerNPCTooltip.UMG_SettlerNPCTooltip_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettlerNPCTooltip_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* TooltipFadeIn;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_4;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_5;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_6;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_7;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_8;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_9;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_192;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_244;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_Food;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_Health;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_Mood;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_Water;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress_Food;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress_Health;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress_Mood;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress_Water;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichTextBlock_Description;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichTextBlock_Status;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichTextBlock_Traits;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InteractionPrompt_C* UMG_InteractionPrompt;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_SkillContainer;  // 0x0398, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SettlerNPCTooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UUMG_SettlementNPCSkill_C* FindOrAddSkillWidget(FSettlementNPCSkillsRowHandle ForSkill);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ProjectionItemChanged();
    UFUNCTION(BlueprintCallable) void SetProjectionActor(UBP_UIProjectionComponent_C* ProjectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateSkills(ASettlementNPCCharacter* ForSettlementNPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateToolTip(AActor* InputItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
