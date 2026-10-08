// /Game/UI/Hab/DropTerminal/UMG_HostProspectsList.UMG_HostProspectsList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_HostProspectsList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* backgroundpattern;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionFilterCheckbox_C* FilterCheckbox_Locked;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionFilterCheckbox_C* FilterCheckbox_MatchingVersion;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_87;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LoadingScreen;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* MultiplayerList;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MultiplayerVertBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* ProspectNameTextbox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ServerCountText;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionSortButton_C* SortButton_Difficulty;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionSortButton_C* SortButton_Duration;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionSortButton_C* SortButton_Hardcore;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionSortButton_C* SortButton_Host;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionSortButton_C* SortButton_Ping;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionSortButton_C* SortButton_Prospect;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SessionSortButton_C* SortButton_Slots;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MultiToggle_C* UMG_MultiToggle;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectProspect SelectProspect;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionSortType SortType;  // 0x0310, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionSortDirection SortDirection;  // 0x0311, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Dedicated;  // 0x0312, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClaimedProspect;  // 0x0313, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DirectConnectInput_C* DirectConnectInput;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DirectConnectString;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Previous_Toggle_Index;  // 0x0330, size 0x4, named "Previous Toggle Index"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedDirectConnectString;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ServerListUpdateTime;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ServerListUpdateRate;  // 0x034C, size 0x4

    UFUNCTION(BlueprintCallable) void AddInstanceToList(UObject* Instance);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_HostProspectsList_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_HostProspectsList_UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CancelDirectConnect();
    UFUNCTION(BlueprintCallable) void ClearDirectConnect();
    UFUNCTION(BlueprintCallable) void ClearList();
    UFUNCTION(BlueprintCallable) void ConfirmDirectConnect();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_HostProspectsList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterCheked(ESessionFilterState Checked, bool WasForced);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_ServerCountText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFindInstance(UIcarusSessionResult* Session);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFocus();
    UFUNCTION(BlueprintCallable) void OnSessionsCleared();
    UFUNCTION(BlueprintCallable) void OnSessionsUpdated();
    UFUNCTION(BlueprintCallable) void ProspectSelected(FProspectServerInfo ProspectInfo, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void RefreshList(bool Dedicated);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SelectProspect__DelegateSignature(FProspectServerInfo ProspectInfo, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void SessionButtonClicked(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLoading(bool Loading);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SortButton(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateQueryFilters();
    UFUNCTION(BlueprintCallable) void UpdateServerList();
};
