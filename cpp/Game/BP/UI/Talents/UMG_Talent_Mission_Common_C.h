// /Game/BP/UI/Talents/UMG_Talent_Mission_Common.UMG_Talent_Mission_Common_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x720, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Mission_Common_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Expand;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background_Expand;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BaseButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_RewardsInfo;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CompletedTick;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DLCImage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DLCInfo;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* HuntLocked;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LockedIcon;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LockedInfo;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MissionDevice;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionTypes;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OperationCompleteInfo;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OperationInProgressInfo;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OperationResolveCurrent;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OutcomeBorder;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* OutcomeList;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Outline_Expand;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectImage;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Scanline;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SearchCorners;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* TalentOverlay;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TierText;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Top_Border;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionDifficulty_C* UMG_MissionDifficulty;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionType_C* UMG_MissionType;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnavailableIcon;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* UnavailableInOpenWorldInfo;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectMissionClicked ProspectMissionClicked;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x0368, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 ExpireTime;  // 0x0390, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Hovered;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Clicked;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemaingTime;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x03AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLock_InsufficientDeviceUpgrade;  // 0x03C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x03C4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_ClickFailed;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusProspect Prospect_List;  // 0x03E8, size 0x2D0, named "Prospect List"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLock_CompletedInOW;  // 0x06B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLock_OW;  // 0x06B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETalentState State;  // 0x06BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMainMission;  // 0x06BB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGreatHuntsRowHandle GreatHunt;  // 0x06BC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bGreatHuntLock;  // 0x06D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerState* PlayerState;  // 0x06D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOnProspectAvailability LastStatus;  // 0x06E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle Talent;  // 0x06E4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOnProspectAvailability On_Prospect_Availability;  // 0x06FC, size 0x1, named "On Prospect Availability"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ProspectRewardDisplayVertical_C* RewardWidget;  // 0x0700, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle GH_DLC_Flag;  // 0x0708, size 0x18

    UFUNCTION(BlueprintCallable) void Append(FText Text, FText ToAdd, bool NewLine, FText& Out);  // parameters 0x50
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION(BlueprintCallable, BlueprintPure) void DoesGreatHuntTalentMatchTerrain(FTalentsRowHandle RowHandle, bool& Match, FText& Terrain_Name);  // parameters 0x38
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Mission_Common(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetErrorText(FText& Error);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocked();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsMissionCurrentlyTimeLocked(bool& IsTimeLocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnFlagsUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void OnProspectSelectedHandler(FTalentsRowHandle TalentSelected);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnStateChanged_1(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnTalentSet_1(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ProspectMissionClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void RefreshButtonState();
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void RemoveMissionLockedTimer();
    UFUNCTION(BlueprintCallable) void ResetTalentState();
    UFUNCTION(BlueprintCallable) void Set_Hover_States(FSlateColor TextColor, FSlateColor IconColor);  // parameters 0x50, named "Set Hover States"
    UFUNCTION(BlueprintCallable) void Set_Status(EOnProspectAvailability Status);  // parameters 0x1, named "Set Status"
    UFUNCTION(BlueprintCallable) void Set_Zoom_Level_1(int32 Level, float Scale);  // parameters 0x8, named "Set Zoom Level_1"
    UFUNCTION(BlueprintCallable) void SetIsOpenWorld(bool IsOpenWorld);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetProspectColour(TEnumAsByte<ETalentProspectButtonState> State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSearchHighlight_1(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowEncryptedPrompt();
    UFUNCTION(BlueprintCallable) void ShowMissionLockedTimer();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateDependancies();
    UFUNCTION(BlueprintCallable) void UpdateOutcomeText();
};
