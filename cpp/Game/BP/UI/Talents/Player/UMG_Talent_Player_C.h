// /Game/BP/UI/Talents/Player/UMG_Talent_Player.UMG_Talent_Player_C
// Derives from: UUMG_Talent_Base_C > UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x488, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Player_C : public UUMG_Talent_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CompleteAnimation;  // 0x0348, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* UnlockedAnimation;  // 0x0350, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ComingSoonOverlay;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* CompleteFrameBar;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountBorder;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Denominator;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* Desaturator;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverCorners;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_48;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MissingRewards;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Numerator;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RankDesaturator;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RankIcon;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SearchHighlight;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Separator;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* TalentBox;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* TalentButton;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Talent_ComingSoon_C* UMG_Talent_ComingSoon;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* UnlockedBar;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* UnlockedCount;  // 0x0418, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnTalentClicked OnTalentClicked;  // 0x0420, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x0430, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentRanksRowHandle Talent_Rank;  // 0x0458, size 0x18, named "Talent Rank"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x0478, size 0x10

    UFUNCTION(BlueprintCallable) void AlsoNothing();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Confirm();
    UFUNCTION(BlueprintCallable) void CustomEvent();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void FillTooltip(UTalentTooltipWidget* NewTooltipWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Finished_3C782BCA44885C4331A270B17A1E04E8();
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnTalentClicked__DelegateSignature(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void Refresh_Hover_State(const FTalentView& TalentView);  // parameters 0x1BC0, named "Refresh Hover State"
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void RequestRefund();
    UFUNCTION(BlueprintCallable) void Set_Hover_States(FSlateColor TextColor, FSlateColor IconColor);  // parameters 0x50, named "Set Hover States"
    UFUNCTION(BlueprintCallable) void Set_Icon(TSoftObjectPtr<UTexture2D> SoftTexture);  // parameters 0x28, named "Set Icon"
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup_Talent_Rank();  // named "Setup Talent Rank"
    UFUNCTION(BlueprintCallable) void UpdateDesaturationMaterial();
};
