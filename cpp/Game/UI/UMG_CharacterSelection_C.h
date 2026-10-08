// /Game/UI/UMG_CharacterSelection.UMG_CharacterSelection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x668, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterSelection_C : public UUserWidget, public ICustomisationWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterAbandonedText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* CharacterContainer;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CharacterSelectionBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DeleteButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dividers;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dividers_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DurationTime;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Insurance;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoRespawns;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* PlayButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerList;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlayFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectDifficulty;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ProspectInfoBox;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName_1;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ResetCharacter;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SelectedCharacterInfo;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Shadow;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SuitImage;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CreateNewCharacterButton_C* UMG_CreateNewCharacterButton;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnRequestCharacterSelect OnRequestCharacterSelect;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelectedCharacterIndex;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnRequestCharacterDelete OnRequestCharacterDelete;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumColumns;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreateCharacter CreateCharacter;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNumCharacters;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOnlineProfileCharacter SelectedCharacter;  // 0x0358, size 0xF0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSelectedCharacter;  // 0x0448, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SelectedCharacterLockedToProspect;  // 0x0449, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectedCharacterUpdated SelectedCharacterUpdated;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerPreview_HAB_Selection_C* PlayerPreview;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPreviewCameraSettingsEnum CurrentCameraFocus;  // 0x0468, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProspectEndTime;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString JoinLobbyName;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo ProspectInfo;  // 0x0490, size 0x1B0
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DeleteCharacterName_C* DeleteCharacterInputField;  // 0x0640, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemainingTime;  // 0x0648, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DeleteCharacterName_C* AbandonProspectInputField;  // 0x0650, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnRequestAbandonProspect OnRequestAbandonProspect;  // 0x0658, size 0x10

    UFUNCTION() void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(UUMG_CreateNewCharacterButton_C* Input);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CalculatePlayerLevelFromExp(int32 Experience, int32& Level);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Cancel_Reset_Character();  // named "Cancel Reset Character"
    UFUNCTION(BlueprintCallable) void CancelAbandonProspect();
    UFUNCTION(BlueprintCallable) void CancelDeleteCharacter();
    UFUNCTION(BlueprintCallable) void CharacterPlay();
    UFUNCTION(BlueprintCallable) void CharacterSelected(UUMG_CharacterProfileSlot_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearSelectedCharacter();
    UFUNCTION(BlueprintCallable) void ConfirmAbandonProspect();
    UFUNCTION(BlueprintCallable) void ConfirmDeleteSelectedCharacter();
    UFUNCTION(BlueprintCallable) void CreateCharacter__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DeleteSelectedCharacter();
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterSelection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindActiveProspectForCharacter(FOnlineProfileCharacter OnlineCharacterProfile, TArray<FProspectInfo>& ProspectArray, FProspectInfo& ProspectInfo);  // parameters 0x1A0
    UFUNCTION(BlueprintCallable) void GenerateCharacterSelectList(TArray<FOnlineProfileCharacter>& CharacterArray, TArray<FProspectInfo>& ActiveProspectArray);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetButtonRowIndex(UWidget* Button, int32& RowIndex, bool& Found);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void GetCameraFocus(FPreviewCameraSettingsEnum& CameraFocus);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetCosmeticData(FCharacterCosmetics& CosmeticData);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCreationRowFromItem(FMetaItem Item, FCharacterCreationDataRowHandle& Row);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_DurationTime_Text();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnAbandonProspectClicked(UUMG_CharacterProfileSlot_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAbandonProspectTextMatched();
    UFUNCTION(BlueprintCallable) void OnAbandonProspectTextUnmatched();
    UFUNCTION(BlueprintCallable) void OnDeleteCharacterPressedEnter();
    UFUNCTION(BlueprintCallable) void OnDeleteCharacterTextMatched();
    UFUNCTION(BlueprintCallable) void OnDeleteCharacterTextUnmatched();
    UFUNCTION(BlueprintCallable) void OnFailure_C114BFB749A23B1B26FC30A1C3BB6795(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnRequestAbandonProspect__DelegateSignature(FOnlineProfileCharacter Character, FString ProspectId, bool WillDelete);  // parameters 0x101
    UFUNCTION(BlueprintCallable) void OnRequestCharacterDelete__DelegateSignature(FOnlineProfileCharacter Character);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void OnRequestCharacterSelect__DelegateSignature(FOnlineProfileCharacter Character);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void PrepareAbandonProspectPopup();
    UFUNCTION(BlueprintCallable) void RemoveCharacterFromProspects();
    UFUNCTION(BlueprintCallable) void SelectedCharacterUpdated__DelegateSignature(FOnlineProfileCharacter SelectedCharacter);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void SetCharacterVoiceParam(FCharacterVoicesRowHandle Voice);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TogglePlayButtonEnabled();
    UFUNCTION(BlueprintCallable) void UpdateAbandonProspectPrompt();
    UFUNCTION(BlueprintCallable) void UpdateDeleteCharacterPrompt();
    UFUNCTION(BlueprintCallable) void UpdateLobby();
};
