// /Game/BP/UI/Talents/Outposts/UMG_Talent_Outpost_V2.UMG_Talent_Outpost_V2_C
// Derives from: UUMG_Talent_Base_C > UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x4EA, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Outpost_V2_C : public UUMG_Talent_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ArtAnimation;  // 0x0348, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NewPulse;  // 0x0350, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NameHover;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BaseButton;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CompletedIcon;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_1;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_3;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_4;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DescriptionVertbox;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* detail;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* dot;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dropline;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* DurationBackground;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FactionMission;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavorText;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_114;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_144;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ImageMasked;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LockedIcon;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LockedOverlay;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Mission_Faction;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Mission_RegularType;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MissionIcon;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MissionIcon_1;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* NameBackgroundBar;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* New_1;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NewBorder;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectImage;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SearchHighlight;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Time;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectMissionClicked ProspectMissionClicked;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x0490, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 ExpireTime;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Hovered;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Clicked;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequirementLock;  // 0x04D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x04D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x04D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHoverActive;  // 0x04E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUnhoverActive;  // 0x04E9, size 0x1

    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Outpost_V2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void ProspectMissionClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void Refresh_Hover_State(const FTalentView& TalentView);  // parameters 0x1BC0, named "Refresh Hover State"
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void Set_Hover_States(FSlateColor TextColor, FSlateColor IconColor);  // parameters 0x50, named "Set Hover States"
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateDLCLockIcon();
    UFUNCTION(BlueprintCallable) void UpdateLockedCondition();
};
