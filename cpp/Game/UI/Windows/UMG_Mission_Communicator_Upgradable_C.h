// /Game/UI/Windows/UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x4CD, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Mission_Communicator_Upgradable_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* AbandonButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* AvailableQuests;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ContactButton_C* Boss;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* BossButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Bosses_Menu;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BossLock;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCategorySelectButton_C* Campaigns;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CannotRequestMission;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CanRequest;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CanRequest_1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CommunicatorUnavailable;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CommunicatorUnsheltered;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DynamicMissionTimeout;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ErrorOverlay;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ErrorOverlayClose;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* GreatHunts_Menu;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_66;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_72;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_94;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_121;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_137;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* MissionUnavailableButton;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* NorexUpgrade;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCategorySelectButton_C* Operations;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Operations_Menu;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionBoardProspectSelected_C* ProspectSelected;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* ProspectViewSlot;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ProspectViewSwitcher;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RecentlyCancelled;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Requested;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ContactButton_C* Selection;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Selection_Menu;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* SelectionOptions;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SMPL3_Menu;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCategorySelectButton_C* SMPL3Quests;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* UMG_CloseButton_2;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption_91;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Boss_C* UMG_GreatHunt_Boss;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Interface_C* UMG_GreatHunt_Interface;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Hotbar_C* UMG_Hotbar;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionBoardProspectSelected_C* UMG_MissionBoardProspectSelected_414;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade1Missing;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* Upgrade1Slot;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade1Status;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade1Unlock;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade2Missing;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* Upgrade2Slot;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade2Status;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade2Unlock;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* Upgrade3Slot;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade3Status;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Upgrade3Unlock;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* UpgradeInterface;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ContactButton_C* Upgrades;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Upgrades_Menu;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0470, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOpenWorld;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TalentView_Prospect_C* TalentViewProspect;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasUpgrade1;  // 0x0498, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasUpgrade2;  // 0x0499, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasUpgrade3;  // 0x049A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Outpost_Prospect;  // 0x049B, size 0x1, named "Is Outpost Prospect"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterFlagsRowHandle GreatHuntIntroDialogueFlag;  // 0x049C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle GreatHuntsIntroDialogue;  // 0x04B4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOnProspectAvailability CurrentEncryptionState;  // 0x04CC, size 0x1

    UFUNCTION() void BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_Boss_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_Campaigns_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_ErrorOverlayClose_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_MissionUnavailableButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_Operations_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_SMPL3Quests_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_Selection_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_UMG_CloseButton_2_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_Upgradable_Upgrades_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CancelQuest();
    UFUNCTION(BlueprintCallable) void ConfigureUpgrades();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Mission_Communicator_Upgradable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetArchetypeForCurrentProspectData(FTalentArchetypesRowHandle& Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusMap(FTalentArchetypesRowHandle& Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetQuestCancelDelay();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Make_Prospect_Server_Info(FProspectInfo& ProspectInfo);  // parameters 0xA0, named "Make Prospect Server Info"
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void OperationCancelled();
    UFUNCTION(BlueprintCallable) void OperationSelected(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void PlayProspectAudio(FProspectServerInfo Prospect);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void RefreshAbandonedText();
    UFUNCTION(BlueprintCallable) void SelectedQuest(FDynamicQuestsRowHandle Quest);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void StopProspectAudio();
    UFUNCTION(BlueprintCallable) void TalentProspectSelected(FProspectServerInfo ProspectInfo, FText Error);  // parameters 0x1C8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateMissionStart();
    UFUNCTION(BlueprintCallable) void UpgradeInventoryUpdatedHandler(UInventory* Inventory, int32 Location);  // parameters 0xC
};
