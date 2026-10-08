// /Game/UI/UMG_UserInterface.UMG_UserInterface_C
// Derives from: UUMG_UserInterface_Base_C > UUserInterfaceBase > UUserWidget > UWidget > UVisual > UObject
// size 0x709, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_UserInterface_C : public UUMG_UserInterface_Base_C, public IIOnProspectNotificationDisplay_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CraftingProgressbar_C* ActionableHoldProgressBar;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BaseStatTextBlock;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ClockIcon;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ClockIcon_1;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ClockIcon_2;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ClockIcon_3;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ConfirmationOverlay;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ConfirmationScaleBox;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ContextImage_C* ContextTarget;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CurrentBiome;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CurrentTime;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CursorItemSize;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* CursorScaleBox;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* DamageNumbers;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Debug;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* EnviromentalTemp;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* EnvironmentInfoBox;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* EnvTemp;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* FactionMissionBox;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* FullScreenPopupScaleBox;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* FullScreenPopupSlot;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GameVersionNumber;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* HoldActionableContainer;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HUD;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* InteractionPrompt;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractionPromptContainer;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_1;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_2;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_3;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_4;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* LevelupBox;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* MainScaleBox;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MainSize;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* MapDate;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Menus;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* MissionTimer;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* NotificationsContainer;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutOfDateText;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* RadialMenuSlot;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* RadialScaleBox;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StatDebugger;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* SurvivalRetainer;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Time;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AccoladePopup_C* UMG_AccoladePopup;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ArmourPaperdoll_C* UMG_ArmourPaperdoll;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryUnlockNotifier_C* UMG_BestiaryUnlockNotifier;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BinocularsOverlay_C* UMG_BinocularsOverlay;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ChallengeProgressPopup_C* UMG_ChallengeProgressPopup;  // 0x0548, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Chatbox_C* UMG_Chatbox;  // 0x0550, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ClientLogging_C* UMG_ClientLogging;  // 0x0558, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup;  // 0x0560, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ConnectionLost_C* UMG_ConnectionLost;  // 0x0568, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CursorWidget_C* UMG_CursorWidget;  // 0x0570, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeathScreen_C* UMG_DeathScreen;  // 0x0578, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Dialogue_C* UMG_Dialogue;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DisconnectionPopup_C* UMG_DisconnectionPopup;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EncumbranceBar_C* UMG_EncumbranceBar;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EscapeMenu_C* UMG_EscapeMenu;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExperienceNotifier_C* UMG_ExperienceNotifier;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExperienceTracker_C* UMG_ExperienceTracker;  // 0x05A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExposureDisplay_C* UMG_ExposureDisplay;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Fishing_C* UMG_Fishing;  // 0x05B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FocusedItemInfo_C* UMG_FocusedItemInfo;  // 0x05C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GameMessageContainer_C* UMG_GameMessageContainer;  // 0x05C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Hotbar_C* UMG_Hotbar;  // 0x05D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusCompassWidget_C* UMG_IcarusCompassWidget;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InteractionPrompt_C* UMG_InteractionPrompt;  // 0x05E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Levelup_C* UMG_Levelup;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LivingItemSlotUnlockedPopup_C* UMG_LivingItemSlotUnlockedPopup;  // 0x05F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MainMenu_C* UMG_MainMenu;  // 0x05F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MeteorShowers_C* UMG_MeteorShowers;  // 0x0600, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionObjectives_C* UMG_MissionObjectives;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionTimer_C* UMG_MissionTimer;  // 0x0610, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer;  // 0x0618, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountSurvival_C* UMG_MountSurvival;  // 0x0620, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OutOfBounds_C* UMG_OutOfBounds;  // 0x0628, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_QuestObjectiveList_C* UMG_QuestObjectiveList;  // 0x0630, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_QuickCrafting_C* UMG_QuickCrafting;  // 0x0638, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RadiationDisplay_C* UMG_RadiationDisplay;  // 0x0640, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RadiationDisplay_Needle_C* UMG_RadiationDisplay_Needle;  // 0x0648, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourcePromptDisplay_C* UMG_ResourcePromptDisplay;  // 0x0650, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SavingIcon_C* UMG_SavingIcon;  // 0x0658, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SleepScreen_C* UMG_SleepScreen;  // 0x0660, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Stamina_C* UMG_Stamina;  // 0x0668, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Stealth_C* UMG_Stealth;  // 0x0670, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Survival_C* UMG_Survival;  // 0x0678, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WarningContainer_C* UMG_WarningContainer;  // 0x0680, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WeatherEventCard_2_C* UMG_WeatherEventCard_2;  // 0x0688, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WeatherEventTimeline_C* UMG_WeatherEventTimeline_117;  // 0x0690, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WeatherForecast_C* UMG_WeatherForecast;  // 0x0698, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Version;  // 0x06A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VirtualStatTextBlock;  // 0x06A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_ProjectionInterface_C* W_ProjectionInterface;  // 0x06B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerController* PlayerController;  // 0x06B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* CurrentDynamicWidget;  // 0x06C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool VerboseStatDebugging;  // 0x06C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmoContRef;  // 0x06D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* Focused_Item;  // 0x06D8, size 0x8, named "Focused Item"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPlayerCharacterState* PlayerCharacterState;  // 0x06E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMainMenuOptions> LastShownMenu;  // 0x06E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_OnProspectNotificationBase_C*> QueuedNotifications;  // 0x06F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle NotificationShowDelayTimerHandle;  // 0x0700, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEnteredLoop;  // 0x0708, size 0x1

    UFUNCTION(BlueprintCallable) void AddRadialMenu(UUserWidget* RadialMenu);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AllowHotbarScroll(bool& Allow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void AttachedSeatChanged();
    UFUNCTION(BlueprintCallable) void BindBiomeAndTemperatureEvents();
    UFUNCTION(BlueprintCallable) void BiomeUpdated();
    UFUNCTION(BlueprintCallable) void CanDropItemOnCursor(bool& CanDrop);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanShowNotification(bool& CanShow);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void EscapeKeyPressed();
    UFUNCTION() void ExecuteUbergraph_UMG_UserInterface(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusDynamicWidget(UUserWidget* DynamicWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FocusStaticWidget(TEnumAsByte<EStaticUIWidgets> Panel);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetBiome();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationWindow(UUMG_ConfirmationPopup_C*& ConfirmationWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetCurrentTime();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCursorWidget(UUMG_CursorWidget_C*& CursorWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetDialogue(UUMG_Dialogue_C*& Dialogue);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDropEndTime();
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetEnviromentTemp();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFullscreenPopupSlot(UNamedSlot*& NamedPopupSlot);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusLogWindow(UUMG_ClientLogging_C*& LogWindow);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetMap(UIcarusMapScreenBase*& Radar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetMaxProjectionWidgets(int32& MaxProjectionWidgetCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPlayerBaseStats();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPlayerVirtualStats();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UW_ProjectionInterface_C* GetProjectionInterface();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetSize(FVector2D& Size);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) ESlateVisibility Get_QuestObjectiveBox_Visibility_0();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HideLivingItemChallengeProgress();
    UFUNCTION(BlueprintCallable) void HideLivingItemSlotUnlockedPopup();
    UFUNCTION(BlueprintCallable) void HideLoadingScreen();
    UFUNCTION(BlueprintCallable) void HidePanelDisplay();
    UFUNCTION(BlueprintCallable) void HideStaticWidgets();
    UFUNCTION(BlueprintCallable) void HideWeatherTimeline();
    UFUNCTION(BlueprintCallable) void Initialise(ABP_IcarusPlayerControllerSurvival_C* Controller, UInventory* MainInventory, UInventory* HotbarInventory, UInventory* EnvirosuitInventory, UInventory* EquipInventory, UInventory* UpgradeInventory, UInventory* VisionInventory);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) void Is_Showing_Confirmation_Prompt(bool& ShowingConfirmation);  // parameters 0x1, named "Is Showing Confirmation Prompt"
    UFUNCTION(BlueprintCallable) void IsMenuVisible(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsShowingRadialMenu(bool& ShowingRadialMenu);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsShowingStaticWidget(bool CheckCheatOverlay, bool& Menu_Open);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void LogMenuChildren(bool NewParam);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnFactionMissionChanged(FFactionMissionsRowHandle FactionMission);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnLocalWeatherUpdated(FWeatherEventsRowHandle NewEvent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void OnPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnTemperatureUpdated(int32 NewTemperature);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnUITimeOfDayUpdated();
    UFUNCTION(BlueprintCallable) void OpenEscapeMenu();
    UFUNCTION(BlueprintCallable) void QueueNotification(UUMG_OnProspectNotificationBase_C* NotificationToShow, float DurationToShowFor);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void RemoveRadialMenu(UUserWidget* RadialMenu);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void ScaleWidget(UScaleBox* ScaleBox);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetForceShowCrosshair(bool ForceShowCrosshair);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHUDVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMaxProjectionWidgets(int32 NewMaxWidgetCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlayerDead(bool Dead);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetScopeOverlay(bool Visible, FFirearmScopeDataRowHandle ScopeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Show_Game_Message(bool Error, FText Message, float LifeTimeOverride);  // parameters 0x24, named "Show Game Message"
    UFUNCTION(BlueprintCallable) void ShowEscapeMenu();
    UFUNCTION(BlueprintCallable) void ShowLivingItemChallengeProgress(FItemData Item, int32 ProgressAmount);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) void ShowLivingItemSlotUnlockedPopup(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void ShowLoadingScreen(FText Optional_Message, UWidget* OptionalWidget);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ShowMainMenu(bool AllowWhileDead, bool& Success);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShowWeatherTimeline();
    UFUNCTION(BlueprintCallable) void StopAimOverlayIfAiming();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void TickActionableHold();
    UFUNCTION(BlueprintCallable) void TickStatDebug();
    UFUNCTION(BlueprintCallable) void ToggleInventory();
    UFUNCTION(BlueprintCallable) void ToggleMap();
    UFUNCTION(BlueprintCallable) void ToggleMenus();
    UFUNCTION(BlueprintCallable) void TogglePlayerCrafting();
    UFUNCTION(BlueprintCallable) void TogglePlayerTechTree();
    UFUNCTION(BlueprintCallable) void ToggleQuestUI();
    UFUNCTION(BlueprintCallable) void ToggleStatDebugger();
    UFUNCTION(BlueprintCallable) void ToggleVerboseStatDebugging();
    UFUNCTION(BlueprintCallable) void TryChangeToMenu(TEnumAsByte<EMainMenuOptions> MenuType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UnpauseNotifications();
    UFUNCTION(BlueprintCallable) void UpdatePlayerHighlighting(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSaveIndicator();
    UFUNCTION(BlueprintCallable) void UpdateStealth(bool bIsCrouched);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateStealthBinding();
    UFUNCTION(BlueprintCallable) void WaitForInitialBiome();
    UFUNCTION(BlueprintCallable) void WeatherTimelineShowLogic();
};
