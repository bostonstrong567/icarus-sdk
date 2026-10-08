// /Game/BP/UI/Talents/Prospects/UMG_Talent_Prospect_NEW.UMG_Talent_Prospect_NEW_C
// Derives from: UUMG_Talent_Base_C > UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x7F9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Prospect_NEW_C : public UUMG_Talent_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Expand;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background_Expand;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BaseButton;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_RewardsInfo;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CompletedTick;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CornerOverlay;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_1;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_2;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_3;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_4;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DLCImage;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DLCInfo;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HoverGlow;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LockedIcon;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LockedInfo;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MissionDevice;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionTypes;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OperationCompleteInfo;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OutcomeBorder;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* OutcomeList;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Outline_Expand;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectImage;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Scanline;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SearchCorners;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SearchGlow;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TierText;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Time;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeInfo;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TimeShortIcon;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Top_Border;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionDifficulty_C* UMG_MissionDifficulty;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionType_C* UMG_MissionType;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnavailableIcon;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* UnavailableInOpenWorldInfo;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectMissionClicked ProspectMissionClicked;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x0498, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 ExpireTime;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Hovered;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Clicked;  // 0x04D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemaingTime;  // 0x04D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x04DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x04E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLock_InsufficientDeviceUpgrade;  // 0x04F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x04F4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_ClickFailed;  // 0x0510, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusProspect Prospect_List;  // 0x0518, size 0x2D0, named "Prospect List"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLock_CompletedInOW;  // 0x07E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLock_OW;  // 0x07E9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETalentState State;  // 0x07EA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMainMission;  // 0x07EB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUnlockedReward;  // 0x07EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOnProspectAvailability On_Prospect_Availability;  // 0x07ED, size 0x1, named "On Prospect Availability"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOnProspectAvailability LastStatus;  // 0x07EE, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Open_World;  // 0x07EF, size 0x1, named "Is Open World"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ProspectRewardDisplayVertical_C* RewardWidget;  // 0x07F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsStatusUpdate;  // 0x07F8, size 0x1

    UFUNCTION(BlueprintCallable) void Append(FText Text, FText ToAdd, FText& Out);  // parameters 0x48
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Prospect_NEW(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetErrorText(FText& ErrorText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InternalSetStatus();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocked();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsMissionCurrentlyTimeLocked(bool& IsTimeLocked);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void OnProspectSelectedHandler(FTalentsRowHandle ProspectTalent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void ProspectMissionClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void RefreshButtonState();
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void RemoveMissionLockedTimer();
    UFUNCTION(BlueprintCallable) void ResetTalentState();
    UFUNCTION(BlueprintCallable) void Set_Hover_States(FSlateColor TextColor, FSlateColor IconColor);  // parameters 0x50, named "Set Hover States"
    UFUNCTION(BlueprintCallable) void Set_Status(EOnProspectAvailability Status);  // parameters 0x1, named "Set Status"
    UFUNCTION(BlueprintCallable) void Set_Zoom_Level(int32 Level, float Scale);  // parameters 0x8, named "Set Zoom Level"
    UFUNCTION(BlueprintCallable) void SetIsOpenWorld(bool IsOpenWorld);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetProspectColour(TEnumAsByte<ETalentProspectButtonState> State);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ShowEncryptedPrompt();
    UFUNCTION(BlueprintCallable) void ShowMissionLockedTimer();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateOutcomeText();
    UFUNCTION(BlueprintCallable) void UpdateProspectSession();
    UFUNCTION(BlueprintCallable) void UpdateProspectTime();
    UFUNCTION(BlueprintCallable) void UpdateSpecialRewards();
};
