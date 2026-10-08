// /Game/BP/UI/Talents/Workshop/UMG_Talent_Workshop.UMG_Talent_Workshop_C
// Derives from: UUMG_Talent_Base_C > UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x659, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Workshop_C : public UUMG_Talent_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* UnlockedAnimation;  // 0x0348, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountBorder;  // 0x0360, size 0x8
    UPROPERTY(Instanced) UBorder* Frame;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow_1;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverFrame;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* IconBorder;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* IconDesaturator;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LockOverlay;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Numerator;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RequiredMission;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SearchHighlight;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* TalentBox;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* TalentButton;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockBottom;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* UnlockedBar;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* UnlockRequirement;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* UnlockText;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockTop;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TalentTooltip_Workshop_C* TalentTooltip;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnTalentClicked OnTalentClicked;  // 0x0410, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x0420, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ButtonStateColour;  // 0x0448, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorkshopItem Workshop_Item;  // 0x0470, size 0x68, named "Workshop Item"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalent Talents;  // 0x04D8, size 0x130
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Display_Name;  // 0x0608, size 0x18, named "Display Name"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance FMOD_ProgressAnim_Instance;  // 0x0620, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Clicked;  // 0x0628, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_HoveredTooltip;  // 0x0630, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Purchased;  // 0x0638, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequirementLock;  // 0x0640, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x0641, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x0648, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FirstTimeSetup;  // 0x0658, size 0x1

    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanAffordItem(TArray<FWorkshopCost>& Array, bool& CanAffordItem);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Cancel();
    UFUNCTION(BlueprintCallable) void Cancel2();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Workshop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_0A1DEBFE487603FCE6C501A4EFEFFB8F();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetItemReplicationCost(FText& Cost);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetItemResearchCost(FText& Cost);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnTalentClicked__DelegateSignature(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void Refresh_Hover_State(const FTalentView& TalentView);  // parameters 0x1BC0, named "Refresh Hover State"
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void Replicate();
    UFUNCTION(BlueprintCallable) void ReplicateItem();
    UFUNCTION(BlueprintCallable) void Research();
    UFUNCTION(BlueprintCallable) void ResearchItem();
    UFUNCTION(BlueprintCallable) void Set_Hover_States(FSlateColor TextColor, FSlateColor IconColor);  // parameters 0x50, named "Set Hover States"
    UFUNCTION(BlueprintCallable) void Set_Icon(TSoftObjectPtr<UTexture2D> SoftTexture);  // parameters 0x28, named "Set Icon"
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup();
    UFUNCTION(BlueprintCallable) void ShowCannotAfford();
    UFUNCTION(BlueprintCallable) void UpdateDesaturationMaterial();
    UFUNCTION(BlueprintCallable) void UpdateRequiredTalent();
    UFUNCTION(BlueprintCallable) void UpdateUnlockCondition();
};
