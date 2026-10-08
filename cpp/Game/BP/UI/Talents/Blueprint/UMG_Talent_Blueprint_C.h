// /Game/BP/UI/Talents/Blueprint/UMG_Talent_Blueprint.UMG_Talent_Blueprint_C
// Derives from: UUMG_Talent_Base_C > UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x4C4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Blueprint_C : public UUMG_Talent_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* UnlockedAnimation;  // 0x0348, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountBorder;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* Desaturator;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow_1;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverFrame;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Numerator;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* RecipeCount;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ReqLevelNumber;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ReqTextBorder;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* RequiredLevel;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* requiredlevelbase;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SearchHighlight;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* TalentBox;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* TalentButton;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TextBorder;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextName;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BlueprintTalent_RecipeCount_C* UMG_RecipeCount;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnTalentClicked OnTalentClicked;  // 0x03F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x0408, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ButtonStateColour;  // 0x0430, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText NodeName;  // 0x0458, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TalentTooltip_Blueprint_C* TalentTooltip;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Fmod_HoveredToolTip;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance FMOD_HoveredToolTip_Ref;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TalentTooltip_Group_C* TooltipGroup;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x04A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> Out_Row_Names;  // 0x04B0, size 0x10, named "Out Row Names"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentIndex;  // 0x04C0, size 0x4

    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Blueprint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_A81076484900AC102F0EE58623931564();
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnTalentClicked__DelegateSignature(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void Refresh_Hover_State(const FTalentView& TalentView);  // parameters 0x1BC0, named "Refresh Hover State"
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void Set_Hover_States(FSlateColor TextColor, FSlateColor IconColor);  // parameters 0x50, named "Set Hover States"
    UFUNCTION(BlueprintCallable) void Set_Icon(TSoftObjectPtr<UTexture2D> Texture);  // parameters 0x28, named "Set Icon"
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSize(FVector2D InVec);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Update_Required_Level();  // named "Update Required Level"
    UFUNCTION(BlueprintCallable) void UpdateDesaturationMaterial();
    UFUNCTION(BlueprintCallable) void UpdateRequiredTalent();
    UFUNCTION(BlueprintCallable) void UpdateTooltip();
    UFUNCTION(BlueprintCallable) void UpdateTooltipAndComingSoon();
};
