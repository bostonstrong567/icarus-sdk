// /Game/BP/UI/Talents/Prospects/UMG_Talent_Prospect.UMG_Talent_Prospect_C
// Derives from: UUMG_Talent_Base_C > UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x8B2, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Prospect_C : public UUMG_Talent_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NameHoverLight;  // 0x0348, size 0x8
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
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DLCBorder;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DLCImage;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DLCName;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* dot;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dropline;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* DurationBackground;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EncryptedIcon;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Error;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ExoticsIcon;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ExoticsOverlay;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavorText;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HardcoreIcon;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HardcoreOverlay;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_69;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ImageMasked;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* InnerShadow;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* InsuranceIcon;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InsuranceOverlay;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LockImage;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MissionComplete;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MissionCompleteColour;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* MissionLockedTimerSlot;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MissionUnavailable;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MissionUnavailbaleColour;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* NameBackgroundBar;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* New;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NewImage;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NewImageCap;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Operation;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* OperationCap;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OperationImage;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectImage;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* ProspectNameCanvas;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SearchHighlight;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SpecialIcon;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SpecialOverlay;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TechBorder;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TechImage;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TechTierText;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Time;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeColourBorder;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TimeShortIcon;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionDifficulty_C* UMG_MissionDifficulty;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectRewardDisplay_C* UMG_ProspectRewardDisplay;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnavailableIcon;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockIcon;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* UnlockOverlay;  // 0x0548, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectMissionClicked ProspectMissionClicked;  // 0x0550, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x0560, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 ExpireTime;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Hovered;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Clicked;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemaingTime;  // 0x05A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x05A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x05A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsNotAvailable;  // 0x05B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x05BC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_ClickFailed;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusProspect Prospect_List;  // 0x05E0, size 0x2D0, named "Prospect List"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLockedOut;  // 0x08B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OpenWorldLock;  // 0x08B1, size 0x1

    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Talent_Prospect_BaseButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Prospect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void IsMissionCurrentlyTimeLocked(bool& IsTimeLocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void ProspectMissionClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void Refresh_Hover_State(const FTalentView& TalentView);  // parameters 0x1BC0, named "Refresh Hover State"
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void RefreshTalentRequirement();
    UFUNCTION(BlueprintCallable) void RemoveMissionLockedTimer();
    UFUNCTION(BlueprintCallable) void ResetTalentState();
    UFUNCTION(BlueprintCallable) void Set_Hover_States(FSlateColor TextColor, FSlateColor IconColor);  // parameters 0x50, named "Set Hover States"
    UFUNCTION(BlueprintCallable) void Set_Status(EOnProspectAvailability Status);  // parameters 0x1, named "Set Status"
    UFUNCTION(BlueprintCallable) void Set_Zoom_Level(int32 Level, float Scale);  // parameters 0x8, named "Set Zoom Level"
    UFUNCTION(BlueprintCallable) void SetFlavourText(FText InText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetIsOpenWorld(bool IsOpenWorld);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetProspectColour(TEnumAsByte<ETalentProspectButtonState> State);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ShowEncryptedPrompt();
    UFUNCTION(BlueprintCallable) void ShowMissionLockedTimer();
    UFUNCTION(BlueprintCallable) void UpdateProspectSession();
    UFUNCTION(BlueprintCallable) void UpdateProspectTime();
};
