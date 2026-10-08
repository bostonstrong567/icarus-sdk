// /Game/UI/UMG_CharacterInitialization.UMG_CharacterInitialization_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterInitialization_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* TransitionFade;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOut;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AmbientBackground;  // 0x0278, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BackendLoadingScreen;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingProgress_C* CharacterProgress;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ContentSwitcher;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingProgress_C* ProfileProgress;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingProgress_C* ProspectProgress;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* QuitToDesktopButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Settings;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterCreation_C* UMG_CharacterCreation;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSelection_C* UMG_CharacterSelection;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RevisionNumber_C* UMG_RevisionNumber;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingsMenu_C* UMG_SettingsMenu;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Vignette;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECharacterCreationMenus> CurrentState;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerPreviewManager_C* PlayerPreviewManager;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FOnlineProfileCharacter> RetrievedCharacterList;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusProfile RetrievedUserProfile;  // 0x0310, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UserProfileRetrieved;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ActiveProspectsRetrieved;  // 0x0331, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CharactersRetrieved;  // 0x0332, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsComplete;  // 0x0333, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle JoinProspectRow;  // 0x0334, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnCharacterChanged OnCharacterChanged;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Prospect_Conifer;  // 0x0360, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Prospect_Cave;  // 0x0388, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Prospect_Arctic;  // 0x03B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Hab;  // 0x03D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Abandoned;  // 0x0400, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanRetryConnection;  // 0x0428, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ConnectionTimeoutTimerHandle;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FProspectInfo> RetrievedProspects;  // 0x0438, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Prospect_Desert;  // 0x0448, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Prospect_Grasslands;  // 0x0470, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Prospect_Volcanic;  // 0x0498, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Diorama_Prospect_Swamp;  // 0x04C0, size 0x28

    UFUNCTION(BlueprintCallable) void BackButtonPressed();
    UFUNCTION(BlueprintCallable) void BackSettings(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CharacterCosmeticsUpdate(bool Success, FOnlineProfileCharacter UpdatedCharacter);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void CharacterCreationResult(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckIfAccountRetrieved();
    UFUNCTION(BlueprintCallable) void ConnectionTimeout();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DeletePlayerTrackerSave(int32 Slot, bool AfterCreate);  // parameters 0x5
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterInitialization(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateCharacterSelectList(bool CreateCharacterIfEmpty);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetChacterSlots(TArray<int32>& ChrSlots, bool& HasCharacter);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) TSoftObjectPtr<UWorld> GetDioramaForCurrentCharacter();  // parameters 0x28
    UFUNCTION(BlueprintCallable) void HideSettings();
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void MoveToHAB();
    UFUNCTION(BlueprintCallable) void NewCharacterSelected(FOnlineProfileCharacter SelectedCharacter);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void OnAbandonProspectRequest(FOnlineProfileCharacter Character, FString ProspectId, bool WillDelete);  // parameters 0x101
    UFUNCTION(BlueprintCallable) void OnCharacterChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnCharacterDeletionRequest(FOnlineProfileCharacter Character);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void OnCharacterSelected(FOnlineProfileCharacter Character);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void OnConnectMessageEvent(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnCosmeticUpdateRequest(FReqUpdateCosmetics Request, int32 Retries);  // parameters 0x9C
    UFUNCTION(BlueprintCallable) void OnCreateCharacterRequest(FReqCreateCharacter CharacterName, int32 NumRetries, bool SelectNewCharacter);  // parameters 0x95
    UFUNCTION(BlueprintCallable) void OnFail_16D5FF39449681E05656E5AEB0E4B6EC(const FResCreateCharacter& Response);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void OnFail_49458CA04D20AEFC814952AE4F767256(const FResGetCharacters& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFail_5EFAF01E48E09C992CF2528296819869(const FResAbandonProspect& Response);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnFail_8DEB61DF48DB1B1A9300A098DF26F53D(const FResDeleteCharacter& Response);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898(const FResGetAllProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFail_AA2196B04AC3B92C0431BDB2754010AC(const FResGetCharacters& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFail_BEC856464A75D4A166FC988B8C7226EC(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnFail_F77B8CB74F4AF05825B964AC18481892(const FResUpdateCosmetics& Response);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC(const FResCreateCharacter& Response);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void OnSuccess_49458CA04D20AEFC814952AE4F767256(const FResGetCharacters& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnSuccess_5EFAF01E48E09C992CF2528296819869(const FResAbandonProspect& Response);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D(const FResDeleteCharacter& Response);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898(const FResGetAllProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnSuccess_AA2196B04AC3B92C0431BDB2754010AC(const FResGetCharacters& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnSuccess_BEC856464A75D4A166FC988B8C7226EC(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnSuccess_F77B8CB74F4AF05825B964AC18481892(const FResUpdateCosmetics& Response);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void QuitGame();
    UFUNCTION(BlueprintCallable) void QuitToDesktopCancelled();
    UFUNCTION(BlueprintCallable) void RefreshCharacterList();
    UFUNCTION(BlueprintCallable) void ResetContentState();
    UFUNCTION(BlueprintCallable) void ResumeCurrentActiveProspect(FProspectInfo ProspectInfo);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void RetrieveActiveProspects();
    UFUNCTION(BlueprintCallable) void RetrieveCharacters();
    UFUNCTION(BlueprintCallable) void RetrieveUserProfile();
    UFUNCTION(BlueprintCallable) void SelectCharacter(FOnlineProfileCharacter SelectedCharacter);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void SetContentState(TEnumAsByte<ECharacterCreationMenus> State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowSettings();
    UFUNCTION(BlueprintCallable) void SwapToCharacterCreate();
    UFUNCTION(BlueprintCallable) void UpdateCharacterPreview(FCharacterCosmetics CosmeticData);  // parameters 0x80
    UFUNCTION(BlueprintCallable) void UpdateConnectingProgress();
};
